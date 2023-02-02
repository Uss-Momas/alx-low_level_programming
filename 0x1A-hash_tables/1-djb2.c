#include "hash_tables.h"

/**
 * hash_djb2 - implementation of the djb2 algorithm
 *
 * @str: the hash table key used to generate
 * the index value
 *
 * Return: the hash index value
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c; /* hash = (hash * 33) + c*/
	}
	return (hash);
}
