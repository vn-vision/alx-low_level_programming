#include "main.h"

/**
* print_numbers - print 0 - 9
* Description: print numbers 0 - 9 and new line
* Return: 0 (success)
*
*/

void print_numbers(void)
{
	int i;
	
	for (i = 0; i < 10; i++)
	{
		putchar(i);
	}
	
	putchar('\n');
}
