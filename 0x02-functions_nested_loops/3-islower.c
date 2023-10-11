#include "main.h"
#include <ctype.h>


/**
* main -Entry point
* Return : 0 (success)
* _islower() - function to check for lowercase characters
*
*/

int _islower(int c);

int main(void)
{
	int r;

	r= _islower('H');
	_putchar(r + '0');

	r= _islower('o');
	_putchar(r + '0');

	r= _islower(108);
	_putchar(r + '0');

	_putchar('\n');
	return (0);
}

int _islower(int c)
{
	if(islower(c)){
	return (1);
	}
	else
	{
	return (0);
	}
}
