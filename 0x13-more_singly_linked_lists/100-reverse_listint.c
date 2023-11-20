#include "lists.h"

/**
 * reverse_listint - reverse a listint_t linked list
 * @head: adrdress of the head pointer
 * Return: pointer to listint_t
*/

listint_t *reverse_listint(listint_t **head)
{
	listint_t *cur = *head, *prev = NULL;

	if (!head || !*head)
		return (NULL);
	while (*head != NULL)
	{
		*head = cur->next;
		cur->next = prev;
		prev = cur;
		cur = *head;
	}
	*head = prev;
	return (*head);
}
