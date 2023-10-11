#include "main.h"

/**
* print_sign - print out the sign of a number
* @n: value to check when using the function
*
* Description: print out the required results
*
* Return: return integer value 0
*
*/


int print_sign(int n)
{
	int m = -1;

	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (m);
	}

	return (0);
}
