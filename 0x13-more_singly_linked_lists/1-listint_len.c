#include "lists.h"
/**
  * listint_len - func that returns the length of a list
  * @h: the singly linked list
  * Return: the length
  */
size_t listint_len(const listint_t *h)
{
	size_t len;

	len = 0;
	while (h != NULL)
	{
		h = h->next;
		len++;
	}
	return (len);
}
