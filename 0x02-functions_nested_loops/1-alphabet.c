#include "main.h"

/**
*print_alphabet - print alphabets
*
*Description: print_alphabet use to print a to z
*
*Return: return void
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
