#include "variadic_functions.h"
#include <stdarg.h>

/**
* print_numbers -prints numbers
* description: followed by line
* @separator: string btwn numbers
* @n: number count
* Return: void
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nArgs;
	unsigned int i;

	va_start(nArgs, n);


	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(nArgs, int));

		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}

	printf("\n");
	va_end(nArgs);
}
