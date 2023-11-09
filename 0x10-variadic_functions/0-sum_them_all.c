#include "variadic_functions.h"
#include <stdarg.h>

/**
* sum_them_all -sums all parameters
* description: takes an undefined number of arguments
* @n: unsigned int
* Return: int
*/


int sum_them_all(const unsigned int n, ...)
{

	va_list nArgs;
	unsigned int i;
	int SUM = 0;

	va_start(nArgs, n);

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
	{
		SUM += va_arg(nArgs, int);
	}

	va_end(nArgs);

	return (SUM);
}
