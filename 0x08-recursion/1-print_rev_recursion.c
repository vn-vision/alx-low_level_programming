#include "main.h"
#include <stdio.h>

/**
* _print_rev_recursion - prints string in reverse
* description: rreverse string
* @s: string
* Return: void
*
*/

void _print_rev_recursion(char *s)
{
	int len, i;

	len = strlen(s);

	for (i = len; i > 0; i--)
	{
		_putchar(s[i]);
	}

	_putchar('\n');
}
