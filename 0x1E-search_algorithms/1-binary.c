#include "search_algos.h"
#include <stdio.h>

/**
 * binary_search - function searches for a value
 * Description: in an array of ints
 * @array: pointer to the first element of the array
 * @size: number of elements in the array
 * @value: value to find
 * Return: -1 if numbe not in array, else the number
 */

int binary_search(int *array, size_t size, int value)
{
	size_t left = 0;
	size_t right = size - 1;
	size_t mid, i;


	if (array == NULL || size == 0)
		return (-1);


	while (left <= right)
	{
		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			printf("%d", array[i]);
			if (i < right)
				printf(", ");
		}
		printf("\n");

		mid = left + (right - left) / 2;

		/**
		 * return mid index if mid val of array == value
		 * assign left to right half of array if value > array[mid]
		 * or right to the left half of array if value < array[mid]
		 */
		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			left = mid + 1;
		else if (array[mid] > value)
			right = mid - 1;
	}

	return (-1);
}
