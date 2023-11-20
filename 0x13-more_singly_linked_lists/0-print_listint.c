#include "lists.h"
#include <stdio.h>

/**
* print_listint - prints all elements
*	: of a listint_t list
* @h: the list
* Return: number of nodes
*
*/

size_t print_listint(const listint_t *h)
{
	unsigned int count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;

		count++;
	}

	return (count);

}
