#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len - count the number of nodes of a double linked list
 * @h: head of the double linked list
 * Return: the number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *temp = h;
	size_t count_nodes = 0;

	while (temp != NULL)
	{
		temp = temp->next;
		count_nodes++;
	}
	return (count_nodes);
}
