#include "main.h"

/**
* main - Entry point
* Return: 0 (success)
* print_alphabet: - print lowercase alphabets.
* print_alphabet - print alphabets
*
* Description: print_alphabet use to print a to z
*
*/


void print_alphabet(void)
{
	char fltr = 'a';

	while (fltr <= 'z')
	{
		_putchar(fltr);
		fltr++;
	}

	_putchar('\n');
}
