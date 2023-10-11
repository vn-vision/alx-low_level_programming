#include "main.h"
#include <stdlib.h>

/**
* main - Entry point
* Return : 0 (Success)
* _abs - computes the absolute value of integers
*
*/

int _abs(int);

int main(void)
{
	int r;

	r = _abs(-1);
	_putchar(r + '0');
	_putchar('\n');

	r = _abs(0);
	_putchar(r + '0');
	_putchar('\n');

	r = _abs(1);
	_putchar(r + '0');
	_putchar('\n');

	r = _abs(98);
	_putchar(r + '0');
	_putchar('\n');

	return (0);
}

int _abs(int num)
{
	return abs(num);
}
