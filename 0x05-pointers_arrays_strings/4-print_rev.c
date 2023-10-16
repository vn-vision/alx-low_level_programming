#include "main.h"
#include <string.h>

/**
* print_rev - prints string in reverse
* description: takes one char pointer
* @s: char pointer
*
*/

void print_rev(char *s)
{
	int i, len = strlen(s);

	for (i = len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}

	_putchar('\n');
}
