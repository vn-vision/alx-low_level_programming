#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * get_dnodeint_at_index -  gets the nth node
 * @head: the head pointer
 * @index: the nth node
 * Return: node, NULL if not
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *nth, *temp;
	unsigned int i;

	temp = head;
	i = 0;

	if (head == NULL)
		return (NULL);

	while (temp->next != NULL)
	{
		if (i == index)
			nth =  temp;
		i++;
		temp = temp->next;
	}

	return (nth);
}
