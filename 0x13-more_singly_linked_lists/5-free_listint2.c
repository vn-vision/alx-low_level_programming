#include "lists.h"

/**
 * free_listint2 - free linked list
 * @head: address of the head pointer
 * Return: return void
*/

void free_listint2(listint_t **head)
{
	listint_t *free_node = NULL;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		free_node = *head;
		*head = (*head)->next;
		free(free_node);
	}
	*head = NULL;
}
