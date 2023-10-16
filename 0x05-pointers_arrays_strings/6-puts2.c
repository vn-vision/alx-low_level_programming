#include "main.h"
#include <string.h>
/**
* puts2 - prints every other character of a string
* description: it seems like it prints  evens
* @str: char pointer
*
*/

void puts2(char *str)
{
	int i;
	int l = strlen(str);

	for (i = 0; i < l; i += 2)
	{
			_putchar(str[i]);
	}

	_putchar('\n');
}
