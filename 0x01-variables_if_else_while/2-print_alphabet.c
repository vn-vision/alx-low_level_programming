#include <stdio.h>

/**
* main - Entry point
* while loop to print a-z
* putchar display the letters
* Return: 0 (success)
*/

int main(void)
{
	char ltr = 'a';

	while (ltr <= 'z')
	{
		putchar(ltr);
		ltr++;
	}
	putchar('\n');
	return (0);
}
