#include "main.h"
#include <string.h>

/**
* _puts_recursion - prints a string.
* description: function like puts
* @s: the string
* Return: void
*
*/

void _puts_recursion(char *s)
{
	int len, i;

	len = strlen(s);

	for (i = 0; i < len; i++)
	{
		_putchar(s[i]);
	}

	_putchar('\n');
}
