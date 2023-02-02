#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include <stdbool.h>

#define MAX_NAME 256
#define TABLE_SIZE 10

typedef struct 
{
	char name[MAX_NAME];
	int age;
} person;

person *hash_table[TABLE_SIZE];

void init_hash_table()
{
	for (int i = 0; i < TABLE_SIZE; i++)
		hash_table[i] = NULL;

	//table is empty
}

unsigned int hash(char *key)
{
	int i, length = strnlen(key, MAX_NAME);
	unsigned int hash_value = 0;

	for (i = 0; i < length; i++)
	{
		hash_value += key[i];
		hash_value = (hash_value * key[i]) % TABLE_SIZE;
	}

	return hash_value;
}


void print_table()
{
	for (int i = 0; i < TABLE_SIZE;i++)
	{
		if(hash_table[i] == NULL)
			printf("\t%i\t------\n", i);
		else
			printf("\t%i\t%s\n", i, (hash_table[i])->name);
	}
}


bool hash_table_insertion(person *p)
{
	if (p == NULL)
		return false;

	int index = hash(p->name);

	if (hash_table[index] != NULL)
		//colision, alguen ja esta ocupado
		return false;
	hash_table[index] = p;
	return true;
}

int main(void)
{
	init_hash_table();
	//print_table();

	person jacob = {.name="Jacob", .age=256};
	person kate = {.name="Kate", .age=27};
	person mpho = {.name="Mpho", .age=14};

	hash_table_insertion(&jacob);
	hash_table_insertion(&kate);
	hash_table_insertion(&mpho);

	print_table();
	//printf("Jacob => %u\n", hash("Jacob"));
	//printf("Ussumane => %u\n", hash("Ussumane"));
	//printf("Milena => %u\n", hash("Milena"));
	//printf("Sara => %u\n", hash("Sara"));
	return (0);
}
