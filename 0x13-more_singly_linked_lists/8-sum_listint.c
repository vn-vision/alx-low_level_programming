#include "lists.h"

/**
 * sum_listint - sum of all the data of linked list
 * @head: pointer to the first element
 * Return: int
*/

int sum_listint(listint_t *head)
{
	listint_t *temp = head;
	size_t count = 0;

	if (head == NULL)
		return (0);
	while (temp)
	{
		count += temp->n;
		temp = temp->next;
	}
	return (count);
}
