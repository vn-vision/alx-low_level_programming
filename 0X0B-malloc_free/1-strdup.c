#include "main.h"
#include <stdlib.h>

/**
* _strdup - pointer to a new string
* description: duplicate of str
* @str: string to duplicate
* Return: Null if str == NULL
*/

char *_strdup(char *str)
{
	char *str2;
	unsigned int i;

	if (str == NULL)
		return (NULL);

	str2 = malloc(strlen(str) + 1);

	if (str2 == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
	{
		str2[i] = str[i];
	}

	str2[i] = '\0';

	return (str2);
}
