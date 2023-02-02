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
	hash_node_t *node, *current_node;
	unsigned long int index;

	index = key_index((unsigned char *) key, ht->size);

	node = create_node((char *)key, (char *)value);
	if (node == NULL)
		return (0);

	current_node = ht->array[index];
	/* se for NULL significa que aquele indice nao esta ocupado*/
	if (current_node == NULL)
	{
		node->next = NULL;
		ht->array[index] = node;
		printf("\tIndex: \tValue:\n");
		printf("\t%lu \t%s\n", index, node->value);
	}
	/* significa que o indice esta ocupado*/
	else
	{
		/*verificar se as chaves sao identicas*/
		/* se forem identicas, significa que temos que actualizar*/
		if (strcmp(current_node->key, (char *) key) == 0)
		{
			/* Actualizar o valor*/
			strcpy(ht->array[index]->value, value);
			printf("Updating value:\n\tIndex: \tValue:\n");
			printf("\t%lu \t%s\n", index, ht->array[index]->value);
			return (1);
		}
		else
		{
			/*Colisao encontrada*/
			/*Por enquanto faz nada*/
			node->next = current_node;
			ht->array[index] = node;
			printf("Colision found\n:\t%lu \t%s\n",index, current_node->value);
			return (1);
		}
	}
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
