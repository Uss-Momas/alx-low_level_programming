#include "lists.h"
/**
  * list_len - function that calculates the number of elements
  * @h: the singly linked lists
  * Return: the length of the singly linked lists
  */
size_t list_len(const list_t *h)
{
	size_t len;

	len = 0;
	while (h!= NULL)
	{
		h = h->next;
		len++;
	}

	return (len);
}
