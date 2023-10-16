#include "main.h"
#include <string.h>
/**
* rev_string - reverse a string in reverse
* description: takes one char pointer
* @s: char pointer
*
*/

void rev_string(char *s)
{
	int i, j, len = strlen(s);
	char tmp;

	for (i = 0, j = length - 1; i < j; i++, j--) {
		tmp = s[i];
		s[i] = s[j];
		s[j] = tmp;
	}
}
