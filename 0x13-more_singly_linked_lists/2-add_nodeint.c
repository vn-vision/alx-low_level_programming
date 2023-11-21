#include "lists.h"

/**
* add_nodeint - adds a new node
*	:at the beginning of s listint_t
* @head: list head node
* @n: size of list
* Return: address of new element,
* NULL if it failed.
*/


listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = NULL;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		return (*head);
	}
	new_node->next = *head;
	*head = new_node;
	return (*head);
}
