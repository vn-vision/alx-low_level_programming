#include "lists.h"

/**
* print_list - print the elements in list
* @h: pointer to the defined struct
* Return: number of nodes
*
*/

size_t print_list(const list_t *h)
{
	unsigned int node_count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)");

		printf("[%u] %s\n", h->len, h->str);

		h = h->next;
		node_count++;
	}

	return (node_count);
}
