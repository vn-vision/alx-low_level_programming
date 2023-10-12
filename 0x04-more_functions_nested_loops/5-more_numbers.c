#include "main.h"

/**
* more_numbers - prints 0 - 14
* Description: prints 0 - 14 followed by a new line.
* Return:  (success)
*
*/

void more_numbers(void)
{

	int i;

	i = 0;

	while (i <= 10)
	{
		int j;

		j = 0;

		while (j <= 14)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
