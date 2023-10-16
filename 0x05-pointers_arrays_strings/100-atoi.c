#include "main.h"

/**
* _atoi - Convert a string to an integer.
* @s: Pointer to the input string
* Return: The integer converted from the string, or 0 if no valid integer is found.
*/
int _atoi(char *s)
{
	int sign = 1;
	int resp = 0;
	int i = 0;

	if (s[0] == '-')
	{
		sign = -1;
		i++;
	}
	else if (s[0] == '+')
	{
		i++;
	}

	while (s[i] != '\0')
	{
		if (s[i] >= '0' && s[i] <= '9')
		{

			if (resp > (INT_MAX - (s[i] - '0')) / 10)
			{

				return (sign == 1) ? INT_MAX : INT_MIN;
			}

			resp = resp * 10 + (s[i] - '0');
		}
		else
		{
			break;
		}
		i++;
	}

	return sign * resp;
}
