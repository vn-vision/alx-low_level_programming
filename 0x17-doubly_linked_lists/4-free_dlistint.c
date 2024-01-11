#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_dlistint - frees a double list
 * @head: the head node
 * Return: void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	temp = head;

	if (head == NULL)
		return;

	while (head != NULL)
	{
		temp = temp->next;
		free(head);
		head = temp;
	}
}
