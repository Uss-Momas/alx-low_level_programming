#include "lists.h"
#include <stdio.h>
/**
  * delete_nodeint_at_index - deletes node in given index
  * @head: the starting point of the linked list
  * @index: the index of the element
  * Return: 1 if success or -1 if fails
  */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int size, i = 0;
	listint_t *tmp, *prev;

	size = getListSize(*head);
	if (index >= size)
		return (-1);

	tmp = *head;
	if (index == 0)
	{
		tmp = tmp->next;
		free(*head);
		*head = tmp;
	}
	else
	{
		while (i != index)
		{
			prev = tmp;
			tmp = tmp->next;
			i++;
		}
		prev->next = tmp->next;
		free(tmp);
	}
	return (1);
}

/**
  * getListSize - func that gets the size of the list
  * @head: the start point of the list
  * Return: the size of the list
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
