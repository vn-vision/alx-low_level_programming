#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
* str_concat - point to new allocated space
* description: contents of s1 followed by s2
* if NULL treat as empty string
* @s1: string 1
* @s2: string 2
* Return: NULL on failure
*
*/

char *str_concat(char *s1, char *s2)
{
	if (s1 == NULL) s1 = "";
	if (s2 == NULL) s2 = "";

	char  *combo;
	unsigned int i, j;

	combo = malloc(strlen(s1) + strlen(s2) + 1);

	if (combo != NULL)
	{
		for (i = 0; i < strlen(s1); i++)
		{
			combo[i] = s1[i];
		}

		for (j = 0; j < strlen(s2); j++)
		{
			combo[i + j] = s2[j];
		}

		combo[i + j] = '\0';

		free(combo);

		return (combo);

	}

	return (NULL);

}
