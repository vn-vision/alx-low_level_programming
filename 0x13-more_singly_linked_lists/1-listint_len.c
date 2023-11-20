#include "lists.h"
#include <stdio.h>

/**
* listint_len - returns the number of elements
*	: in a linked listint_t list
* @h: the list
* Return: number of elements
*
*/

size_t listint_len(const listint_t *h)
{
	unsigned int count = 0;

	while (h != NULL)
	{
		h = h->next;

		count++;
	}
	return (count);
}
