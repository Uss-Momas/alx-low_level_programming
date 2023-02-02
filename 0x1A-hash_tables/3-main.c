#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
	hash_table_t *ht;

	ht = hash_table_create(1024);
	hash_table_set(ht, "betty", "cool");
	hash_table_set(ht, "hetairas", "Amigo");
	hash_table_set(ht, "mentioner", "Hahahahah Colision");
	hash_table_set(ht, "betty", "Ups");
	hash_table_set(ht, "ussumane", "");
	return (EXIT_SUCCESS);
}

