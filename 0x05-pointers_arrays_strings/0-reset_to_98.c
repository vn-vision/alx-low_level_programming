#include "main.h"
#include <stdio.h>

/**
* reset_to_98 - takes pointer and changers value it points to to 98
* description: it take one int pointer parameter
* @n: pointer parameter
*
*/

void reset_to_98(int *n)
{
	*n = 98;
}




/**
* main - check the code
*
* Return: Always 0.
*/

int main(void)
{
	int n;

	n = 402;
	printf("n=%d\n", n);
	reset_to_98(&n);
	printf("n=%d\n", n);
	return (0);
}
