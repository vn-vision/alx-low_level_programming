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
	if (key == NULL)
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
	while (cur_array != NULL)
	{
		if (strcmp(cur_array->key, key))
		{
			/** add pair to the start of the node */
			new->next = cur_array->next;
			cur_array->next = new;
			return (1);
		}
		cur_array = cur_array->next;
	}
	/** key is new add it to array */
	new->next = cur_array;
	cur_array = new;
	return (1);
}
