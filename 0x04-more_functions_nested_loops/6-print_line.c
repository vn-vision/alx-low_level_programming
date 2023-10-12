#include "main.h"

/**
* print_line - prints a line
* Description: prints underscores _ n times
*
*/

void print_line(int n)
{
	int i;

	i = 0;

	while (i < n)
	{
		putchar('_');
	}
	_putchar('\n');
}
