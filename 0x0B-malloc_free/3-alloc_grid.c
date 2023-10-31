#include "main.h"
#include<stdlib.h>

/**
* alloc_grid -pointer to 2D array
* description: if height==width==0, NULL
* @width: width
* @height: height
* Return: int
*/

int **alloc_grid(int width, int height)
{
	if (width <= 0 || height <= 0)
		return NULL;

	int **grid_el = (int **)malloc(height * sizeof(int *));

	if (grid_el == NULL)
		return NULL;

	for (int i = 0; i < height; i++)
	{
		grid_el[i] = (int *)malloc(width * sizeof(int));
		if (grid_el[i] == NULL)
		{

			for (int j = 0; j < i; j++)
				free(grid_el[j]);
			free(grid_el);
			return NULL;
		}
	}


	for (int i = 0; i < height; i++)
	{
		for (int j = 0; j < width; j++)
		{
			grid_el[i][j] = 0;
		}
	}

	return grid_el;
}
