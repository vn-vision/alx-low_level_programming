#include "lists.h"

/**
 * insert_nodeint_at_index - insert a new node at a given index
 * @head: address of the head pointer
 * @idx: index
 * @n: data
 * Return: pointer
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp = *head, *new_node = NULL;
	listint_t *temp_str = NULL;
	size_t i;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (*head);
	}
	for (i = 0; i < idx - 1; i++)
	{
		if (!temp)
		{
			free(new_node);
			return (NULL);
		}
		temp = temp->next;
	}
	temp_str = temp;
	new_node->next = temp->next;
	temp_str->next = new_node;
	return (new_node);
}
