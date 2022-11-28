#include "lists.h"
/**
  * add_nodeint_end - add's node in the end of the list
  * @head: the start of the list
  * @n: the data to save
  * Return: the address of the new element
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newElement;
	listint_t *tmp;

	tmp = *head;
	newElement = malloc(sizeof(listint_t));
	if (newElement == NULL)
		return (NULL);

	newElement->n = n;
	newElement->next = NULL;

	if (tmp == NULL)
		*head = newElement;
	else
	{
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = newElement;
	}
	return (newElement);
}
