#include "lists.h"

/**
* pop_listint - delete the head node of listint_t linked list
* @head: address of the head pointer
* Return: return integer value
*/

int pop_listint(listint_t **head)
{
	int i;
	listint_t *temp;

	if (head == NULL || *head == NULL)
		return (0);

	temp = *head;
	i = temp->n;
	*head = temp->next;
	free(temp);

	return (i);
}
