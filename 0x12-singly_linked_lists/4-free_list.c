#include "lists.h"

/**
* free_list - free the lists
* @head: node head
* Return: void
*/

void free_list(list_t *head)
{
	list_t *current = head;

	while (current != NULL)
	{
		list_t *temp = current;

		current = current->next;

		free(temp->str);
		free(temp);
	}
}
