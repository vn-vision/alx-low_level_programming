#include "main.h"

/**
* is_prime -detects if an input number is a prime number.
* description: checks the
* @n: input number.
* @c: iterator.
*/

int is_prime(unsigned int n, unsigned int c)
{
	if (n % c == 0)
	{
		if (n == c)
			return (1);
		else
			return (0);
	}
	return (0 + is_prime(n, c + 1));
}



/**
* is_prime_number - prints 1 for prime else 0
* description: number divisible by 1 || itself
* @n: n
* Return: int
*/

int is_prime_number(int n)
{
	if (n == 0)
		return (0);
	if (n < 0)
		return (0);
	if (n == 1)
		return (0);
	return (is_prime(n, 2));
}
