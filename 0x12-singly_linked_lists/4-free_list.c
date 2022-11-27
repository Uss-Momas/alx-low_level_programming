#include "lists.h"
/**
  * free_list - frees the memory occupied by the list
  * @head: the first element
  */
void free_list(list_t *head)
{
	while (head != NULL)
	{
		free(head->str);
		free(head);
		head = head->next;
	}
}
