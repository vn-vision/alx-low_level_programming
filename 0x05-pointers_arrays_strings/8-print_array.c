#include "main.h"

/**
* print_array - prints n elements of an array of integers
* description: numbers separated by commas followed by space
* @a: int parameter pointer
* @n: number of elements of the array to be printed
*
*/

void print_array(int *a, int n)
{

	int i;

	i = 0;

	while (i < n)
	{
		_putchar('0' + a[i]);

		if (i < n-1)
		{
			_putchar(',');
			_putchar(' ');
		}

		i++;
	}

	_putchar('\n');
}
