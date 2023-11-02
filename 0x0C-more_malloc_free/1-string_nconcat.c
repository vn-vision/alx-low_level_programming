#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
* string_nconcat - point to a new space
* description: concar s1 with s2's first n
* @s1: string 1
* @s2: string 2
* @n: n bytes to copy
* Return: pointer to memory
*
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, len;
	char *nconc;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	nconc = malloc(strlen(s1) + n + 1);

	if (nconc == NULL)
	{
		return (NULL);
	}

	for (j = 0; s1[j] != '\0'; j++)
	{
		nconc[j] = s1[j];

	}


	len = strlen(s2);

	if (n >= len)
	{
		n = len;
	}

	for (i = 0; s2[i] != '\0'; i++)
	{
		nconc[j + i] = s2[i];

	}


	nconc[j + i] = '\0';

	return (nconc);

}
