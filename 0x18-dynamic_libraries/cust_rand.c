#include <stdio.h>

/**
* rand - function with the same signature as rand
* Return: int
*/

int rand()
{
	/* winning draw */
	unsigned int sequence[] = {9, 8, 10, 24, 75, 9};
	static int index = 0;
	unsigned int a_size =  6;
	static int result = 0;

	result = sequence[index] - 1;
	index++;
	
	if (index >= a_size - 1)
		index = 0;
	return result;
}
