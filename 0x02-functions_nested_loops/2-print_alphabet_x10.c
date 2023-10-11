#include "main.h"

/**
* main - Entry point
* Return : 0 (success)
* print_alphabet_x10(void) prints the alphabet 10 times
*
*/

void print_alphabet_x10(void)
{
	int num = 0;

	while (num <= 10)
	{
		char fltr = 'a';

		while (fltr <= 'z')
		{
			_putchar(fltr);
			fltr++;
		}

		num++;
	}

	return (0);
}
