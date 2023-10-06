#include <stdio.h>

/**
* main - Entry point
* while loop to print 0-9a-f base16
* putchar display the letters
*/

int main(void)
{
	char ltr;
	
	/* the CAP letters*/
	ltr = 0;
	while(ltr <= 9)
	{
		putchar(ltr);
		ltr++;
	}
	
	ltr = 'a';
	while(ltr <= 'f')
	{
		putchar(ltr);
		ltr++;
	}
	putchar("\n");
	
	return (0);
}
