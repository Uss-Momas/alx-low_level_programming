#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

dlistint_t *getNewNode(const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	new->prev = NULL;
	return (new);
}
/**
 * add_dnodeint - adds a new node to the list
 * @head: pointer to a pointer to the head
 * @n: the const number to be added to the list
 * Return: the address of the new element or NULL
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode;

	newNode = getNewNode(n);
	if (newNode == NULL)
		return (NULL);
	if ((*head) == NULL)
		(*head) = newNode;
	else
	{
		(*head)->prev = newNode;
		newNode->next = (*head);
		(*head) = newNode;
	}
	return (newNode);
}
