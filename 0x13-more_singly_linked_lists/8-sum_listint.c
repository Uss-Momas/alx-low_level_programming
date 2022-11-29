#include "lists.h"

/**
  * sum_listint - sum's every integer of the list
  * @head: the starting point of the list
  * Return: the sum of integers or 0 if list is empty
  */
int sum_listint(listint_t *head)
{
	int sum;
	listint_t *current;

	sum = 0;
	if (head == NULL)
		return (0);

	current = head;
	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
