#include "lists.h"
/**
 * sum_dlistint - sums all the data of a list
 * @head: head of the list
 * Return: the sum of all integers in the list
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;
	int sum = 0;

	if (head == NULL)
		return (0);

	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
