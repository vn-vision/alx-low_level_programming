#include "main.h"
#include <stdlib.h>
#include <string.h>

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j;
	char *nconc;
	unsigned int len_s1 = (s1 == NULL) ? 0 : strlen(s1);
	unsigned int len_s2 = (s2 == NULL) ? 0 : strlen(s2);

	// If n is greater or equal to the length of s2, use the entire string s2
	if (n >= len_s2)
	{
		n = len_s2;
	}

	nconc = malloc(len_s1 + n + 1);

	if (nconc == NULL)
	{
		return (NULL);
	}

	for (j = 0; j < len_s1; j++)
	{
		nconc[j] = s1[j];
	}

	for (i = 0; i < n; i++)
	{
		nconc[j + i] = s2[i];
	}

	nconc[j + i] = '\0';

	return (nconc);
}
