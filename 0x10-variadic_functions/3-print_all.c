#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
* print_all -prints anything
* description: ints, strings, floats
* @format: data type of arguments
* Return: void
*/

void print_all(const char * const format, ...)
{
	va_list nArgs;

	va_start(nArgs, format);
	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;

			switch (*format)
			{
				case 'd':
					printf("%d", va_arg(nArgs, int));
					break;
				case 'c':
					printf("%c", va_arg(nArgs, char));
					break;
				case 'f':
					printf("%f", va_arg(nArgs, double));
					break;
				case 's':
				{
					char *str = va_arg(nArgs, char *);

					if (str == NULL)
						printf("(nil)");
					printf("%s", str);
					break;
				}
				default:
					putchar(*format);
					break;
			}
		}
		putchar(*format);

		format++;
	}
	putchar('\n');
	va_end(nArgs);
}
