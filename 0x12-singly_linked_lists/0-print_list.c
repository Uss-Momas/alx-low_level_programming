#include "lists.h"
/**
  * print_list - function that prints all elements of a list
  * @h: the singly linked list
  * Return: the number of nodes
  */
size_t print_list(const list_t *h)
{
	size_t tot;

	tot = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = (const list_t *) h->next;
		tot++;
	}
	return (tot);
}
