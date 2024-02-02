#include "hash_tables.h"

/**
 * key_index - functions gives you index of a key
 * @key: the key
 * @size: size of the hash table
 * Return: index of the key/value pair
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int res;
	
	res = (hash_djb2(key) % size);
	return (res);
}
