#include "lists.h"
#include <stdio.h>
/**
  * print_listint - print the integers in a list
  *
  * @h: the singly linked list
  * Return: the size of the list
  */
size_t print_listint(const listint_t *h)
{
	size_t len;

	len = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		len++;
	}
	return (len);
}
