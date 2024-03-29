#include "hash_tables.h"

/**
 * key_index - function that returns the index
 *
 * @key: is the string used to generate the index
 * @size: is the size of array of the hash_table
 *
 * Return: the index of the key:value pair
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = hash_djb2(key) % size;
	return (index);
}
