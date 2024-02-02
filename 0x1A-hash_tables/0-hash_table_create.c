#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * hash_table_create - creates hash table
 * @size: the size of array
 * Return: returns a pointer to the hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *table;

	table = malloc(sizeof(hash_table_t));

	if (table == NULL)
		return (NULL);

	table->array = malloc(sizeof(hash_node_t) * size);

	if (table->array == NULL)
	{
		free(table);
		return (NULL);
	}

	table->size = size;
	for (i = 0; i < size; i++)
	{
		table->array[i] = NULL;
	}
	return (table);
}
