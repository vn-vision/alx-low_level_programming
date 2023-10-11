#include "main.h"

/**
* print_alphabet_x10 - print out alphabets 10 times
*
* Description: return the required results
*
* Return: return void
*/

void print_alphabet_x10(void)
{
	int num = 0;

	while (num <= 9)
	{
		char fltr = 'a';

		while (fltr <= 'z')
		{
			_putchar(fltr);
			fltr++;
		}

		_putchar('\n');
		num++;
	}
}
