#include "lists.h"
#include <stdio.h>
/**
  * print_listint_safe - function that prints a linked list
  * @head: starting point of the list
  * Return: number of nodes of the list
  */
size_t print_listint_safe(const listint_t *head)
{
	size_t numberNodes;
	const listint_t *tmp;


	numberNodes = 0;
	tmp = head;
	while (tmp != NULL)
	{
		printf("[%p] %d\n", (void *)tmp, tmp->n);
		tmp = tmp->next;
		numberNodes++;
	}
	return (numberNodes);
}
