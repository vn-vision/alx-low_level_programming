#include "main.h"

/**
* factorial - n!
* description: n = 2, 2 * 1
* @n: number to factorize
* Return: -1 for error if n < 0
*/

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);

	return (n * factorial(n - 1));

}
