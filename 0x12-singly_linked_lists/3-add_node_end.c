#include "lists.h"
/**
  * add_node_end - adds element at the end of the list
  * @head: the head of the list
  * @str: the string to be added
  * Return: the address of the element
  */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *element;
	list_t *last;

	element = malloc(sizeof(list_t));
	if (element == NULL)
		return (NULL);

	element->str = strdup(str);
	element->len = strlen(str);
	element->next = NULL;

	last = *head;

	if (last == NULL)
		*head = element;
	else
	{
		while (last->next != NULL)
			last = last->next;
		last->next = element;
	}
	return (element);
}
