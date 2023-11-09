#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
* print_all - prints anything
* @format: data type of arguments
*/
void print_all(const char * const format, ...)
{
	va_list args;
	char *str;
	int i = 0, flag = 0;

	va_start(args, format);

	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				flag = 1;
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				flag = 1;
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				flag = 1;
				break;
			case 's':
				str = va_arg(args, char *);
				if (!str)
					str = "(nil)";
				printf("%s", str);
				flag = 1;
				break;
		}
		if (format[i + 1] && flag)
			printf(", ");

		flag = 0;
		i++;
	}

	printf("\n");
	va_end(args);
}
