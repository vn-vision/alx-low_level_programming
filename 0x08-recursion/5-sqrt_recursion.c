#include "main.h"

/**
* pwr_op - returns the natural square root of a number.
* @n: input number.
* @c: iterator.
* Return: square root or -1.
*/
int pwr_op(int n, int c)
{
	if (c % (n / c) == 0)
	{
		if (c * (n / c) == n)
			return (c);
		else
			return (-1);
	}
	return (0 + pwr_op(n, c + 1));
}
/**
* _sqrt_recursion - returns the natural square root of a number.
* @n: input number.
* Return: natural square root.
*/
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (0);
	else if (n == 1)
		return (1);
	return (pwr_op(n, 2));
}
