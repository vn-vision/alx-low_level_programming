#include "main.h"


/**
* print_diagsums - prints nbr in diagonal
* description: in a square matrix a[i][i]
* @a: the matrix
* @size: size of matrix
* Return: void
*
*/

void print_diagsums(int *a, int size)
{
	int i, count, r_count;

	count = 0;
	r_count = 0;

	for (i = 0; i < size; i++)
	{
		count += a[i][i];
		r_count += a[i][size - 1 - i];
	}

	_putchar(count + '0');
	_putchar(',');
	_putchar(' ');
	_putchar(r_count + '0');
	_putchar('\n');
}
