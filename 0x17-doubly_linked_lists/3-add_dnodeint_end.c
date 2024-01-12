#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint_end - adds element at the end
 * @head: head pointer
 * @n: item to add
 * Return: address of element, or NULL on failure
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *temp;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;
	temp = *head;

	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
	}
	else
	{
		while (temp->next != NULL)
			temp = temp->next;

		temp->next = new;
		new->prev = temp;
	}
	return (new);
}
