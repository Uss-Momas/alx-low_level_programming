#include "lists.h"
#include <stdio.h>
/**
  * print_list - function that prints all elements of a list
  * @h: he pointer to the list_t
  * Return: the number of nodes
  */
size_t print_list(const list_t *h)
{
	size_t tot = 0;

	while (h != NULL)
	{
		if (h->str != NULL)
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		else
			printf("[0] (nil)\n");
		h = h->next;
		tot++;
	}
	return (tot);
}

/**
  * _strlen - function that calculates the length of a string
  * @str: the string
  * Return: the length of the string
  */
int _strlen(const char *str)
{
	int len = 0, i;

	for (i = 0; str[i] != '\0'; i++)
		len++;
	return (len);
}
