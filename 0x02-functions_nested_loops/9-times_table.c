#include <stdio.h>

/**
* main -Entry point
* Return: 0 (success)
* times_table - prints timetale of 9
*
*/

void times_table(void);

int main(void)
{
	times_table();

	return (0);
}
void times_table(void)
{
    int i, j, k;

    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            k = j * i;

            if (j > 0)
            {
                putchar(',');
                putchar(' ');

                if (k < 10)
                    putchar(' ');
            }

            if (k < 10)
                putchar(k + '0');
            else
            {
                putchar(k / 10 + '0');
                putchar(k % 10 + '0');
            }
        }
        putchar('\n');
    }
}
