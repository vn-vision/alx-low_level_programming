#include <stdio.h>

/**
* main - Entry point
* while loop to print a-zA-Z 
* putchar display the letters
*/

int main(void)
{
	char ltr;
	ltr = 'a';
	while(ltr <= 'z')
	{
		putchar(ltr);
		ltr++;
	}
	
	/* the CAP letters*/
	ltr = 'A';
	while(ltr <= 'Z')
	{
		putchar(ltr);
		ltr++;
	}
	putchar("\n");
	
	return (0);
}
