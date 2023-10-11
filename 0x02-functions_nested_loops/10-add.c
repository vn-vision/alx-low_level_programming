#include <stdio.h>

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

	putchar(n + '0');
	putchar('\n')

	return (0);
}

int add(int a, int b)
{
	return (a+b);
}
