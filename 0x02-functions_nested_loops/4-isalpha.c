#include "main.h"
#include <ctype.h>

/**
* main - Entry point
* Return : 0 (success)
* _isalpha - returns 1 if c is a letter upper / lower else 0
*
*/


int _isalpha(int c)
{
	if(isalpha(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	
	return (0);
}
