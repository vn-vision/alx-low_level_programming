#include "main.h"
#include <string.h>

/**
* _strcpy -  function that copies the string
* description: cpy src, including null byte (\0)
* to the buffer pointed to by dest.
* @dest: destination parameter
* @src: source parameter
* return: void - gives back the copy of string. 
*/

char *_strcpy(char *dest, char *src)
{
	return (strcpy(dest, src));
}
