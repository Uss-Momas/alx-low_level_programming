#include <stdio.h>
#include "lists.h"


/**
 * print_dlistint - printing the double linked list
 * @h: header to the double linked list
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *temp = h;
	size_t count_nodes;

	count_nodes = 0;

	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		count_nodes++;
	}
	return (count_nodes);
}
