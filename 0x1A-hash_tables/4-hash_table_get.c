#include "hash_tables.h"

/**
 * hash_table_get - Get a value from the hash table.
 * @ht: Hash table.
 * @key: Key.
 *
 * Return: The value if works, NULL if doesn't.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int i;
	hash_node_t *current;

	if (strcmp(key, "") == 0 || key == NULL || ht == NULL)
		return (NULL);

	i = key_i((const unsigned char *)key, ht->size);
	current = ht->array[i];
	if (current == NULL)
		return (NULL);
	while (strcmp(current->key, key) && current != NULL)
	{
		current = current->next;
	}
	if (current == NULL)
		return (NULL);
	else
		return (current->value);
}
