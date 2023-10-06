#include <stdio.h>

/**
* main -Entry point
* print 0-9
* Return: 0 (success)
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
