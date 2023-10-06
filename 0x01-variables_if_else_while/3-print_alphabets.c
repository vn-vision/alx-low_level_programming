#include <stdio.h>

/**
* main - Entry point
* while loop to print a-zA-Z
* putchar display the letters
* Return: 0 (success)
*/

int main(void)
{
	char ltr, _ltr;

	ltr = 'a';
	_ltr = 'A';
	while (ltr <= 'z')
	{
		putchar(ltr);
		ltr++;
	}
	/* the CAP letters*/
	while (_ltr <= 'Z')
	{
		putchar(_ltr);
		_ltr++;
	}
	putchar('\n');
	return (0);
}
