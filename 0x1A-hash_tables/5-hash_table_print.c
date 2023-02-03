#include "hash_tables.h"

/**
 * hash_table_print - function that prints elements of hash table
 * @ht: the hash table pointer
 * Return: nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;

	if (ht == NULL)
		printf("{}\n");
	else
	{
		printf("{");
		for (i = 0; i < ht->size; i++)
		{
			if (ht->array[i] != NULL)
			{
				printf("'%s': '%s', ", ht->array[i]->key, ht->array[i]->value);
			}
		}
		printf("}\n");
	}
}
