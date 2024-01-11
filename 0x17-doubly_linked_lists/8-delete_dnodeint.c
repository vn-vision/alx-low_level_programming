#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes node at index
 * @head: head pointer
 * @index: index to delete
 * Return: - 1 is success -1 if  failure
 */


int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *dell;
	unsigned int i;

	if (*head ==  NULL)
	{
		return (-1);
	}
	else
	{
		dell = *head;
		i = 0;

		if (index == 0)
		{
			*head = dell->next;
			if (*head != NULL)
				(*head)->prev = NULL;
			free(dell);
			return (1);
		}
		while (dell != NULL && i < index)
		{
			dell = dell->next;
			i++;
		}
		if (dell == NULL)
		{
			printf("out of range\n");
			return (-1);
		}

		if (dell->prev != NULL)
			dell->prev->next = dell->next;
		if (dell->next != NULL)
			dell->next->prev = dell->prev;
		free(dell);

		return (1);
	}
}
