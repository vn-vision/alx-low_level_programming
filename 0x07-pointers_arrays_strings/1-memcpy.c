#include "main.h"

/**
* _memcpy - copies n bytes
* description: from src to dest
* @src: source memory area
* @dest: memory destination
* @n: number of bytes to copy
* Return: pointer to dest
*
*/


char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
