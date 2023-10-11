#include "main.h"

/**
* main -Entry point
* Return : 0 (Success)
* jack_bauer - prints minutes from midnight
*
*/


void jack_bauer(void)
{
    int hour, minute;

    for (hour = 0; hour < 24; hour++)
    {
        for (minute = 0; minute < 60; minute++)
        {

            _putchar((hour / 10) + '0');
            _putchar((hour % 10) + '0');


            _putchar(':');


            _putchar((minute / 10) + '0');
            _putchar((minute % 10) + '0');


            _putchar('\n');
        }
    }
    return (0);
}
