#include <stdio.h>

/**
* main - Entry point
* while loop to print 0-9a-f base16
* putchar display the letters
*/

int main(void)
{
	char ltr;
	int num;
	
	/* the CAP letters*/
	num = 0;
	ltr = 'a';
	while (num <= 9)
	{
		putchar(num + '0');
		num++;
	}	
	while (ltr <= 'f')
	{
		putchar(ltr);
		ltr++;
	}
	putchar('\n');	
	return (0);
}
