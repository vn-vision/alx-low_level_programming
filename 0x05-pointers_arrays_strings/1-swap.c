#include "main.h"

/**
* swap_int - swaps values of two integers
* description: takes two pointer parameters
* @a: first int pointer
* @b: second int pointer
*
*/

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

