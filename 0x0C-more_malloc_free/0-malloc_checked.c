#include "main.h"
#include <stdlib.h>

/**
* malloc_checked - returns pointer
* description: to memory
* @b: the usigned bit
* Return: 98 on termination
*
*/

void *malloc_checked(unsigned int b)
{
	unsigned int *db = malloc(sizeof(unsigned int) * b);

	if (db == NULL)
	{
		exit(98);
	}

	return (db);
}
