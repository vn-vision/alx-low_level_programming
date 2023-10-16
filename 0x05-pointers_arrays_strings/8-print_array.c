#include "main.h"
#include <stdio.h>

/**
* print_array - prints n elements of an array of integers
* Numbers are separated by commas followed by space.
* @a: Pointer to an array of integers.
* @n: Number of elements to be printed.
*/

void print_array(int *a, int n)
{
	int i = 0;

	if (n <= 0)
	{
		printf("%d", a[i]);
	}

	while (i < n)
	{
		printf("%d", a[i]);

		if (i < n - 1)
		{
			printf(", ");
		}

		i++;
	}

	printf("\n");
}
