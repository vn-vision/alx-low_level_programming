#include "main.h"

/**
* _strlen_recursion- length of string
* description: counts the characters
* @s: string
* Return: number of characters
*/

int _strlen_recursion(char *s)
{
	int i, count;

	count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		count++;
	}

	return (count);
}
