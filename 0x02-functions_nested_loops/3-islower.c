#include "main.h"
#include <ctype.h>


/**
*_islower - to check for lower case of int c
*@c: value to be check for by the function
*
*Description: (int c) use to check the required results
*
*Return: return the integer 0
*/


int _islower(int c)
{
	if (islower(c))
		return (1);
	else
		return (0);

	return (0);
}
