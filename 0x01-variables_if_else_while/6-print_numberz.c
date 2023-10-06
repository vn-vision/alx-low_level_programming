#include <stdio.h>

/**
* main - Entry point
* while loop to print 0-9
*/

int main(void)
{
	int num;
	
	/* the numbers*/
	num = 0;
	
	while(num <= 9)
	{
		putchar(num + '0');
		num++;
	}
	 return (0);
}
