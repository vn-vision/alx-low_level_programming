#include "main.h"
#include <ctype.h>


/**
* main -Entry point
* Return: 0 (success)
* _islower() - function to check for lowercase characters
*
*/


int _islower(int c)
{
	if (islower(c))
		return (1);
	else
		return (0);

	return (0);
}
