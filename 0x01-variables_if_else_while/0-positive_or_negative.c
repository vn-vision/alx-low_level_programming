#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* if statement checks the value of n to give respnse */

/* main - entry point */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	if(n>0)
	{
		printf("%d is positive\n", n);
	}
	else
	if(n<0)
	{
		printf("%d is negative\n", n);
	}
	else
	if(n==0)
	{
		printf("%d is zero\n", n);
	}
	return (0);
}
