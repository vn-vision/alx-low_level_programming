#include <stdio.h>

/**
* main -Entry point
* Return 0 : success
* print 0-9 using putchar
*/

int main(void)
{
	for (int i=0; i<10; i++)
	{
		putchar(i + 'O');
		if (i<9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	
	putchar("\n");
	return (0);
}
