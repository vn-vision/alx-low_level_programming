#include <stdio.h>

/**
* main -Entry point
* Return : 0 (success)
* print_sign - prints the sign of a number
* Returns 1 and prints + if n is greater than zero
* Returns 0 and prints 0 if n is zero
* Returns -1 and prints - if n is less than zero
*
*/

int print_sign(int n);

int main(void)
{
	int r;

	r = print_sign(98);
	putchar(',');
	putchar(' ');
	putchar(r + '0');
	putchar('\n');

	r = print_sign(0);
	putchar(',');
	putchar(' ');
	putchar(r + '0');
	putchar('\n');

	r = print_sign(0xff);
	putchar(',');
	putchar(' ');
	putchar(r + '0');
	putchar('\n');

	r = print_sign(-1);
	putchar(',');
	putchar(' ');
	putchar(r + '0');
	putchar('\n');

	return (0);
}

int print_sign(int n)
{
	if (n == 0)
	{
		putchar('0');
		return (1);
	}
	else if (n > 0)
	{
		putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		putchar('-');
		return (-1);
	}
}
