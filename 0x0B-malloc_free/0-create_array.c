#include "main.h"
#include <stdlib.h>

/**
* create_array - creates an array of chars
* description: initializes it with specific char
* @size: size of int
* @c: char
* Return: NULL if size = 0
*/

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr_char;

	arr_char = malloc(sizeof(char) * size);

	if (arr_char == 0)
		return (NULL);

	if (size != 0)
	{
		for (i = 0; i < size; i++)
			arr_char[i] = c;

		return (arr_char);
	}

	free(arr_char);
	return (NULL);



}
