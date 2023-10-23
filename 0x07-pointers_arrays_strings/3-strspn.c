#include "main.h"
#include <string.h>

/**
* _strspn - returns number of bytes
* description: in intial segment of s
* consists only of bytes from accept
* @s: first segment
* @accept: segmen to compare characters with
* Return: number of bytes in s that are in accept
*
*/

unsigned int _strspn(char *s, char *accept)
{
	int s_len, acc_len, i, j;
	unsigned int count = 0;

	s_len = strlen(s);
	acc_len = strlen(accept);

	for (i = 0; i < s_len; i++)
	{
		int found = 0;

		for (j = 0; j < acc_len; j++)
		{
			if (s[i] == accept[j])
				found = 1;
				break;
		}

	if (found == 1)
		count++;
	else
		return (count);
	}

	return (count);
}
