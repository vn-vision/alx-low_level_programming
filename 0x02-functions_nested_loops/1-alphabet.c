#include "main.h"

/**
* main - Entry point
* Return : 0 (success)
* print_alphabet - print lowercase alphabets.
*/

void print_alphabet(void);

int main(void)
{
	print_alphabet();
	return (0);
}

void print_alphabet(void)
{
	char fltr = 'a';

	while (fltr <='z')
	{
		_putchar(fltr);
		fltr++;
	}

	_putchar('\n');
}
