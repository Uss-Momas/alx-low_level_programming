#include "hash_tables.h"
/**
 * hash_table_set - add element to the hash table
 *
 * @ht: is the hash table that we want to add/update key:value
 * @key: the key
 * @value: value associated with key
 * Return: 1-Sucess or 0-failure
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node, *temp_node;
	unsigned long int index;

	if (ht == NULL || ht->array == NULL || value == NULL)
		return (0);
	if (key == NULL)
		return (0);

	index = key_index((unsigned char *) key, ht->size);
	temp_node = ht->array[index];

	/* Checking for collisions*/
	while (temp_node != NULL)
	{
		if (strcmp(temp_node->key, key) == 0)
		{
			free(temp_node->value);
			temp_node->value = strdup(value);
			return (1);
		}
		temp_node = temp_node->next;
	}

	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
	{
		free(node);
		return (0);
	}
	node->key = strdup(key);
	node->value = strdup(value);
	node->next = ht->array[index];
	ht->array[index] = node;
	return (1);
}


/**
 * create_node - creates a node for the hash_table
 * @key: the key
 * @value: the value associated with key
 * Return: the node or NULL
 */
hash_node_t *create_node(char *key, char *value)
{
	hash_node_t *node;

	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (NULL);
	node->key = malloc(strlen(key) + 1);

	if (node->key == NULL)
		return (NULL);
	node->value = malloc(strlen(key) + 1);
	if (node->value == NULL)
		return (NULL);

	strcpy(node->key, key);
	strcpy(node->value, value);
	return (node);
}
