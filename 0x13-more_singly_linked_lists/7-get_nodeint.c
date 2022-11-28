#include "lists.h"
/**
  * get_nodeint_at_index - get a node at specific index
  * @head: the head of the list
  * @index: the index wanted
  * Return: the element wanted
  */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *aux;
	unsigned int i;

	if (head == NULL)
		return (NULL);

	for (i = 0; i <= index; i++)
	{
		aux = head;
		head = head->next;
		if (head == NULL && i == index)
			return (NULL);
	}
	return (aux);
}
