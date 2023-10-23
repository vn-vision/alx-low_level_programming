#include "main.h"

/**
* _memset - assigns first n char of s value of b
* description: takes three parameters
* @s: buffer to assign values
* @b: value to assign to buffer
* @n: number of character to change
* Return: pointer to memory area s
*
*/

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
