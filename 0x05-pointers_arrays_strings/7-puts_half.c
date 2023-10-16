#include "main.h"
#include <string.h>


/**
* puts_half - prints the second half of the string
* description: if the number of characters is odd, the function should print last _n_ characters
* n = (length_of_string - 1) / 2
* @str: functions parameter
*
*/


void puts_half(char *str)
{
	int l, n, i;

	l = strlen(str);

	if ( l % 2 != 0)
		n = (l - 1) / 2;
	else
		n = l / 2;

	for (i = n; i < l; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
