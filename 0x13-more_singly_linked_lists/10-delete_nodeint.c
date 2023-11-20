#include "lists.h"


/**
 * delete_nodeint_at_index - dealete nodesat a particular index
 * @head: address of the head pointer
 * @index: index
 * Return: int
*/


int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *cur, *sub;

	if (!head || !*head)
		return (-1);
	cur = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(cur);
		return (1);
	}
	for (i = 0; i < (index - 1); i++)
	{
		cur = cur->next;
		if (cur == NULL)
			return (-1);
	}
	sub = cur->next;
	cur->next = sub->next;
	free(sub);
	return (1);
}
