#include "lists.h"

/**
* get_nodeint_at_index - return the nth node of linked list
* @head: pointer to the first element
* @index: index of the linked list
* Return: pointer
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp = head;
	size_t i;

	for (i = 0; i < index; i++)
	{
		if (temp->next == NULL)
		return (NULL);
		temp = temp->next;
	}
	return (temp);
}
