#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint_end - adds a new node in the end of the list
 * @head: the address of the head
 * @n: the constant to be added
 * Return: the add of the new element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode, *last;

	last = (*head);
	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	newNode->next = NULL;
	newNode->prev = NULL;

	if ((*head) == NULL)
		(*head) = newNode;
	else
	{
		while (last->next != NULL)
			last = last->next;
		last->next = newNode;
		newNode->prev = last;
	}
	return (newNode);
}
