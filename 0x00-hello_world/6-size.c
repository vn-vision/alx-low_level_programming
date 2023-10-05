#include <stdio.h>

/**
* main - Entry point 
* using size of input types in different systems
* Return: always 0 (success) 
*/

int main(void)
{
	printf("Size of a char:%lubyte(s)\n", sizeof(char));
	printf("Size of an int:%lubyte(s)\n", sizeof(int));
	printf("Size of a long int:%lubyte(s)\n", sizeof(long));
	printf("Size of a long long int:%lubyte(s)\n", sizeof(long long));	
	printf("Size of a float:%lubyte(s)\n", sizeof(float));
	return (0);
}
