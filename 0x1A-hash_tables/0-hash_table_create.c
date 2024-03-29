#include "hash_tables.h"
/**
 * hash_table_create - function that creates a hash_table
 * @size: is the size of the array
 * Return: a pointer to the newly created hash table or NULL
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table = NULL;
	unsigned long int i;

	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
		return (NULL);
	table->size = size;
	table->array = malloc(sizeof(hash_node_t *) * size);
	if (table->array == NULL)
	{
		free(table);
		table = NULL;
		return (NULL);
	}

	for (i = 0; i < size; i++)
		table->array[i] = NULL;
	return (table);
}
