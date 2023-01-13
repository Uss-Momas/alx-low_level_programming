#include "lists.h"

unsigned int get_size(dlistint_t *head);
/**
 * get_dnodeint_at_index - gets the node in a Node
 * @head: the start point of the list
 * @index: the index of the node to be found
 * Return: the node desired
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp = head;
	unsigned int i = 0, size;

	size = get_size(head);
	if (head == NULL)
		return (NULL);
	if (index > size)
		return (NULL);
	while (i != index)
	{
		temp = temp->next;
		i++;
	}
	return (temp);
}

/**
 * get_size - counts the number of elements of the list
 * @head: the head of the list
 * Return: number of elements
 */
unsigned int get_size(dlistint_t *head)
{
	unsigned int size = 0;
	dlistint_t *temp = head;

	if (head != NULL)
	{
		while (temp != NULL)
		{
			temp = temp->next;
			size++;
		}
	}
	return (size);
}


