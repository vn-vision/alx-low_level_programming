#include "main.h"
#include <strings.h>
/**
* _strcat - appending function
* description: dest overwritten by src
* Return: resulting string
* @dest: strings destination
* @src: source of string
*
*/

char *_strcat(char *dest, char *src)
{
	return (strcat(dest, src));
}
