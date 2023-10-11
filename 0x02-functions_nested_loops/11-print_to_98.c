#include "main.h"

/**
* main -Enry point
* Return : 0 (success)
* print_to_98 - a function to numbers to 98
*
*/

int main(void)
{
	print_to_98(0);
	print_to_98(98);
	print_to_98(111);
	print_to_98(81);
	print_to_98(-10);

	return (0);
}

void print_to_98 (int n)
{
	while (n != 98)
	{

		_putchar(n);
		_putchar(',');
		_putchar(' ');

		if (n < 98)
		{
			n++;
		}
		else
		{
			n --;
		}

	}

	_putchar(n);
	_putchar('\n');
}
