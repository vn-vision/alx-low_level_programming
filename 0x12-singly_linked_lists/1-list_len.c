#include "lists.h"

/**
* list_len - the number of elements in list
* @h: the list
* Return: the number of elements
*
*/

size_t list_len(const list_t *h)
{
	unsigned int ele_count = 0;

	while (h != NULL)
	{
		h = h->next;
		ele_count++;
	}
	return (ele_count);
}
