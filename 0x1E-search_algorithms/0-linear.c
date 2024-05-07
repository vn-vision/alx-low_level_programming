#include "search_algos.h"
#include <stdio.h>

/**
 * linear_search - function searches for a value
 * Description: in an array of ints
 * @array: pointer to the first element of the array
 * @size: number of elements in the array
 * @value: value to find
 * Return: -1 if numbe not in array, else the number
 */

int linear_search(int *array, size_t size, int value)
{
	int k = '\0';
	size_t i;

	if (size == 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			k = i;
			break;
		}
	}

	if (k == '\0')
		return (-1);
	return (k);
}
