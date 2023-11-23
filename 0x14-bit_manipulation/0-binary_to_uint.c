#include "main.h"

/**
* binary_to_uint - converts a binary to usigned int
* @b: points to a string of 0 | 1
* Return: converted number or 0
*	: if b has values other than 0 | 1
*	 b is null
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;

	if (b == NULL)
		return (0);

	while (*b != '\0')
	{
		if (*b != '0' && *b != '1')
			return (0);

	/**
	* increment number
	*/
		num = num * 2 + (*b - '0');

		b++;
	}
	return (num);
}
