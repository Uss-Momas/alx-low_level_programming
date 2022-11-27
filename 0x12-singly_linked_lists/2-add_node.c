#include "lists.h"
/**
  * add_node - func that adds node to list
  * @head: the first element
  * @str: the data to be added
  * Return: the address of a new element
  */
list_t *add_node(list_t **head, const char *str)
{
	list_t *element;

	element = malloc(sizeof(list_t));
	if (element == NULL)
		return (NULL);

	element->str = strdup(str);
	element->len = strlen(str);
	element->next = *head;
	*head = element;
	return (element);
}
