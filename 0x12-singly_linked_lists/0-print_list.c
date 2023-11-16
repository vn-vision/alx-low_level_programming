#include "lists.h"
#include <stdio.h>


/**
* print_list - prints all the elements of list_t
* Return: number of nodes
* @h: the elements
*/

size_t print_list(const list_t *h)
{
	size_t num_nodes = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");

		printf("[%u] %s\n", h->len, h->str);

		/**
		* move to the next node
		* increment node count
		*/

		h = h->next;

		num_nodes++;
	}
	return (num_nodes);
}
