#include "lists.h"
#include <stdio.h>
/**
  * insert_nodeint_at_index - insert a node in given index
  * @head: the head of the list
  * @idx: the index of the list to be inserted
  * @n: the data of the node
  * Return: the address of the new node
  */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int size, i = 0;
	listint_t *newElement;
	listint_t *current, *previous;

	size = (unsigned int)getListSize(*head);
	if (idx > size)
		return (NULL);

	newElement = malloc(sizeof(listint_t));
	if (newElement == NULL)
		return (NULL);
	newElement->n = n;
	if (idx == 0)
	{
		newElement->next = *head;
		(*head) = newElement;
		return (*head);
	}
	current = *head;
	while (i != idx)
	{
		previous = current;
		current = current->next;
		i++;
	}
	newElement->next = current;
	previous->next = newElement;
	return (newElement);
}

/**
  * getListSize - get the size of the list
  * @head: the starting point of the list
  * Return: the size of the list or 0 if empty
  */
int getListSize(listint_t *head)
{
	int size;
	listint_t *tmp;

	if (head == NULL)
		return (0);
	size = 0;
	tmp = head;
	while (tmp != NULL)
	{
		tmp = tmp->next;
		size++;
	}
	return (size);
}
