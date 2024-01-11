#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * sum_dlistint - adds the data in lists
 * @head: the head pointer
 * Return: the sum of data
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp;
	unsigned int count;

	temp = head;
	count = 0;

	if (head == NULL)
		return (0);
	while (temp != NULL)
	{
		count += temp->n;
		temp = temp->next;
	}
	return (count);
}
