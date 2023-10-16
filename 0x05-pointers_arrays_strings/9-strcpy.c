#include "main.h"
#include <string.h>

/**
* _strcpy -  function that copies the string
* description:  copies the string pointed to by src, including the terminating null byte (\0), to the buffer pointed to by dest.
* @dest: destination parameter
* @src: source parameter
*
*/

char *_strcpy(char *dest, char *src)
{
	return (strcpy(dest, src));
}
