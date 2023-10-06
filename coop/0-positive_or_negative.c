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
	printf(n, " is positive");
	}
	else
	if(n<0)
	{
	printf(n, " is negative");
	}
	else
	if(n==0)
	{
	printf(n, " is zero");
	}
	return (0);
}
