#include <stdlib.h>
#include "lists.h"

/**
 * free_dlistint - frees the memory used by the list
 * @head: the starting point of the list
 * Return: nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;

	while (temp != NULL)
	{
		head = temp->next;
		free(temp);
		temp = head;
	}
}
