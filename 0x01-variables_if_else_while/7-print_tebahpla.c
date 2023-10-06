#include <stdio.h>

/**
* main - Entry point
* while loop to print z-a 
* putchar display the letters
*/

int main(void)
{
	char ltr = 'z';

	while(ltr >= 'a')
	{
	putchar(ltr);
	ltr--;
	}
	
	putchar("\n");
	
	return (0);
}
