#include "lists.h"

/**
  * free_listint - free's the list
  * @head: the head of the list
  * Return: nothing
  */
void free_listint(listint_t *head)
{
	listint_t *aux;

	while (head != NULL)
	{
		aux = head;
		head = head->next;
		free(aux);
	}
}
