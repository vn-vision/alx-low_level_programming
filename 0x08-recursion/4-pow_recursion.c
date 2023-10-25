#include "main.h"

/**
* _pow_recursion - return x^y
* description: x raised to power of y
* @x: value to power
* @y: power value
* Return: value of x
*/


int _pow_recursion(int x, int y)
{

	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
