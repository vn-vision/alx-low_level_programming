#include "lists.h"

/**
* add_node - adds a new node
* at the beginning of a list_t
* @head: lists head
* @str: string
* Return: address of new element
*	  NULL if it failed
*
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(list_t));

	/**
	* check mem allocation
	* free memory on failure
	*/
	if (new_node == NULL)
		return (NULL);

	/**
	* duplicate str to new node
	* check str len
	* free memory if str == NULL
	* assign head to new node
	*/
	new_node->str = strdup(str);

	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = strlen(str);

	/*
	* set new_node next pointer to head 51
	* update the head to point to new node 53
	*/
	new_node->next = *head;

	*head = new_node;

	printf("[%u] %s\n", new_node->len, new_node->str);
	return (new_node);
}
