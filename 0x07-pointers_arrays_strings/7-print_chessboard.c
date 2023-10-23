#include "main.h"

/**
* print_chessboard - prints the chessboard
* description: chess prototype
* @a: 2d array
* Return: void
*/

void print_chessboard(char (*a)[8])
{

	int i = 0;
	int j;

	while (i < 8)
	{
		j = 0;

		while (j < 8)
		{
			putchar(a[i][j]);
			j++;
		}
	putchar('\n');
	i++;

	}

}
