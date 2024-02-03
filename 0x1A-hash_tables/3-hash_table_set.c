#include "hash_tables.h"
#include <stdio.h>
#include <string.h>

/**
 * hash_table_set - adds element to hash table
 * @ht: this is the hash table
 * @key: this is the key part
 * @value: the value to part
 * Return: 1 success, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *cur_array, *new;

	if (ht == NULL || ht->array == NULL)
	{
		fprintf(stderr, "The hash table is NULL");
		return (0);
	}
	if (key == NULL || *key == '\0')
	{
		fprintf(stderr, "key cannot be an empty string");
		return (0);
	}
	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
	{
		fprintf(stderr, "Malloc failure");
		return (0);
	}

	index = hash_djb2((const unsigned char *)key) % ht->size;
	cur_array = ht->array[index];
	new->key = strdup(key);
	new->value = strdup(value);
	new->next = NULL;
	
	if (cur_array == NULL)
		ht->array[index] = new;
	else
	{
		if (strcmp(cur_array->key, key) == 0)
		{
			/** add pair to the start of the node */
			new->next = cur_array->next;
			ht->array[index] = new;
			free(cur_array);
			return (1);
		}
		while (cur_array->next != NULL && strcmp(cur_array->next->key, key) != 0)
			cur_array = cur_array->next;
		if (strcmp(cur_array->key, key) ==0)
		{
			new->next = cur_array->next->next;
			cur_array->next = new;
			free(cur_array->key);
			free(cur_array->value);
			free(cur_array);
		}
		else
		{
			new->next = ht->array[index];
			ht->array[index] = new;
		}
	}
	return (1);
}
