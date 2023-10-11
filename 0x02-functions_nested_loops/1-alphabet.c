#include <stdio.h>

/**
* main - Entry point
* Return : 0 (success)
* putchar - print lowercase alphabets.
*/

int main(void)
{
	char fltr = 'a';
	
	while (fltr <='z')
	{
		putchar(fltr);
		fltr++;
	}
	
	putchar('\n');
	return (0);
}
