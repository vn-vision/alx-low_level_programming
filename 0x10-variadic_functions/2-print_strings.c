#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
* print_strings -prints strings
* description: a variable of strings
* @separator: string btwn strings
* @n: string count
* Return: void
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list nArgs;

	va_start(nArgs, n);

	for (i = 0; i < n; i++)
	{
		const char *currentString = va_arg(nArgs, const char *);

		if (currentString == NULL)
			printf("(nil)");

		else
			printf("%s", currentString);

		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}

	printf("\n");
	va_end(nArgs);

}
