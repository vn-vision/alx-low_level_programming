#include "main.h"

/**
* rev_string - reverse a string in reverse
* description: takes one char pointer
* @s: char pointer
*
*/

void rev_string(char *s)
{
	int i, len = strlen(s);

	for (i = len - 1; i >= 0; i--)
	{
		s[ ] = s[i];
	}
}
