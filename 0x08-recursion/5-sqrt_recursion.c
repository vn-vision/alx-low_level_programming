#include "main.h"

/**
* _sqrt_recursion - x^(1/2)
* nat_root - returns the natural square root of a number.
* description: squreroot
* @n: number to root
* Return: value of n
*
* @n: input number.
* @c: iterator.
*
*/

int nat_root(int n, int c)
{
	if (c % (n / c) == 0)
	{
		if (c * (n / c) == n)
			return (c);
		else
			return (-1);
	}
	return (0 + nat_root(n, c + 1));
}

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);

	return (nat_root(n, 2));
}
