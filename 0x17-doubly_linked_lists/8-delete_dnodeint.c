#include <stdlib.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes a node in a given index
 * @head: the head of the list
 * @index: the index of the Node
 * Return: 1-success or -1 for failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		(*head) = (*head)->next;
		return (1);
	}
	while (temp != NULL)
	{
		if (i == index)
			break;
		temp = temp->next;
		i++;
	}
	(temp->prev)->next = (temp->next);
	(temp->next)->prev = (temp->prev);
	return (1);
}
