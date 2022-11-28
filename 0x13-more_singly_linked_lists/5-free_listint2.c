#include "lists.h"

/**
  * free_listint2 - free's a list
  * @head: the head of the list
  * Return: nothing
  */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head != NULL)
	{
		while (*head != NULL)
		{
			tmp = (*head)->next;
			free(*head);
			*head = tmp;
		}
		head = NULL;
	}
}
