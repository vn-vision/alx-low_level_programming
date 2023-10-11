#include "main.h"

/**
* main - Entry point
* Return: 0 (success)
* print_alphabet_x10: -prints the alphabet 10 times
* print_alphabet_x10 - print out alphabets 10 times
*
* Description: return the required results
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
		
		_putchar('\n');
		num++;
	}
}
