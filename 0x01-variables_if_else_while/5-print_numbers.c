#include <stdio.h>

/**
* main -Entry point
* Return 0 : (success)
* print 0-9
*/

int main(void)
{
	int i;
	
	for (i = 0; i <= 9; i++)
	{
		printf("%d", i);
	}
	putchar('\n');
	return (0);
}
