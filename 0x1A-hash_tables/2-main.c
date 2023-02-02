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
	char *s;
	unsigned long int hash_table_size = 1024;

	s = "cisfun";
	printf("%lu\n", hash_djb2((unsigned char *) s));
	printf("%lu\n", key_index((unsigned char *) s, hash_table_size));
	s = "Don't forget to tweet today";
	printf("%lu\n", hash_djb2((unsigned char *) s));
	printf("%lu\n", key_index((unsigned char *) s, hash_table_size));
	s = "98";
	printf("%lu\n", hash_djb2((unsigned char *) s));
	printf("%lu\n", key_index((unsigned char *) s, hash_table_size));
	return (EXIT_SUCCESS);
}
