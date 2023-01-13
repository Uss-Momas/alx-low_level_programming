#include <stdlib.h>
#include "lists.h"
unsigned int get_size(dlistint_t *head);
/**
 * insert_dnodeint_at_index - insert a node in a given index
 * @h: the head of the list
 * @idx: the index to place the new node
 * @n: the data of the new node
 * Return: the address of the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newNode, *temp, *prev;
	unsigned int i = 0, size;

	size = get_size(*h);
	if (idx > size)
		return (NULL);
	if (idx == 0)
		newNode = add_dnodeint(h, n);
	else
	{
		newNode = malloc(sizeof(dlistint_t));
		if (newNode == NULL)
			return (NULL);

		newNode->n = n;
		newNode->next = NULL;
		newNode->prev = NULL;

		if (*h == NULL)
		{
			*h = newNode;
			exit(0);
		}

		temp = *h;
		while (i != idx)
		{
			temp = temp->next;
			i++;
		}
		prev = temp->prev;
		prev->next = newNode;
		newNode->prev = prev;

		newNode->next = temp;
		temp->prev = newNode;
	}
	return (newNode);
}

/**
 * get_size - counts the number of elements of the list
 * @head: the head of the list
 * Return: number of elements
 */
unsigned int get_size(dlistint_t *head)
{
	unsigned int size = 0;
	dlistint_t *temp = head;

	if (head != NULL)
	{
		while (temp != NULL)
		{
			temp = temp->next;
			size++;
		}
	}
	return (size);
}
