#include "main.h"
#include <strings.h>

/**
* _strncat - concatenates two strings
* @dest: destination
* @src: source
* @n: number of bytes to use
* Return: resulting string.
*
*/

char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}
