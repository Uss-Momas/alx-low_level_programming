#include "lists.h"
/**
  * pop_listint - removes the first element of the list
  * @head: the head of the list
  * Return: 0 if list is empty or the head node's data(n)
  */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int n;

	if (head == NULL)
		return (0);

	tmp = *head;
	n = tmp->n;
	*head = (*head)->next;
	free(tmp);
	return (n);
}
