#include "main.h"
#include <string.h>

/**
* _strchr - returns pointer to first occurence of ...
* description: ...char c in string s, null if not found
* @s: string to iterate through
* @c: character to find
* Return: pointer to first occurence
*/

char *_strchr(char *s, char c)
{
	int len, i;

	len = strlen(s);

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}

	return (NULL);
}
