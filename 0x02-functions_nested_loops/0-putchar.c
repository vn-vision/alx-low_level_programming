#include <stdio.h>

/**
* main - Entry point
* Return : 0 (success)
* print characters " _putchar " using putchar
*/

int main(void)
{
	char *name;

	name = "_putchar";

	for(int i=0; name[i] != '\0'; i++)
	{
		putchar(name[i]);
	}
	putchar('\n');
	return (0);
}
