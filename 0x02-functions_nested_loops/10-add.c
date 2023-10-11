#include "main.h"

/**
* main -Entry point
* Return : 0 (Success)
* add - adds two integers
*
*/

int add(int, int);

int main(void)
{
	int n;

	n = add(89, 9);

	_putchar(n + '0');
	_putchar('\n')

	return (0);
}

int add(int a, int b)
{
	return (a+b);
}
