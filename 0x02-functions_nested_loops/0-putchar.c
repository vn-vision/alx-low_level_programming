#include "main.h"

/**
* main - Entry point
* Return: 0 (success)
* print characters " _putchar " using putchar
*/

int main(void)
{
	char *name;
	int i;

	name = "_putchar";

	for (i = 0; name[i] != '\0'; i++)
	{
		_putchar(name[i]);
	}
	_putchar('\n');
	return (0);
}
