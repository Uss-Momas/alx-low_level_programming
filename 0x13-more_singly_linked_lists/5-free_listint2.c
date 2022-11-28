#include "lists.h"

/**
  * free_listint2 - free's a list
  * @head: the head of the list
  * Return: nothing
  */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	while (*head != NULL)
	{
		tmp = *head;
		(*head) = (*head)->next;
		free(tmp);
	}
	*head = NULL;
}
