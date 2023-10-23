#include "main.h"

/**
* _strpbrk - locates first occurence in s
* description: of any of bytess in the string accept
* @s: first string
* @accept: second string
* Return: pointer to the byte in s
* NULL is no such byte is found
*
*/

char *_strpbrk(char *s, char *accept)
{

	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				return (s + i);
		}
	}

	return (NULL);

}
