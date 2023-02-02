#include "hash_tables.h"
/**
 * hash_table_create - function that creates a hash_table
 * @size: is the size of the array
 * Return: a pointer to the newly created hash table or NULL
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;

	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
		return (NULL);

	return table;
}
