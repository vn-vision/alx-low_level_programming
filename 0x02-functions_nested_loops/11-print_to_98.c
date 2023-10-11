#include <stdio.h>

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

		putchar(n);
		putchar(',');
		putchar(' ');

		if (n < 98)
		{
			n++;
		}
		else
		{
			n --;
		}

	}

	putchar(n);
	putchar('\n');
}
