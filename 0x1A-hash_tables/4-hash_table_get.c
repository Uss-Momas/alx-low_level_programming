#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 *
 * @ht: the hash table pointer
 * @key: the key to search the value
 * Return: the value or NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *current_node;
	unsigned long int index;

	index = key_index((unsigned char *) key, ht->size);
	current_node = ht->array[index];
	if (current_node == NULL)
		return (NULL);
	return (current_node->value);
}
