#include <stdio.h>

/**
* main - Entry point
* while loop to print 0-9
* Return: 0 (success)
*/

int main(void)
{
	int num;

	num = 0;
	while (num <= 9)
	{
		putchar(num + '0');
		num++;
	}
	putchar('\n');
	return (0);
}
