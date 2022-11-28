#include "lists.h"
/**
  * add_nodeint -add a node in the beginning of list
  * @head: the actual beginning of the list
  * @n: the data to be added
  * Return: the pointer to the added element
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newElement;

	newElement = malloc(sizeof(listint_t));
	if (newElement == NULL)
		return (NULL);

	newElement->n = n;
	newElement->next = *head;
	*head = newElement;
	return (newElement);
}
