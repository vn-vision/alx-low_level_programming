#include "main.h"

/**
 * _atoi - convert a string to an integer.
 * @s: char type string
 * Return: integer converted
 */

int _atoi(char *s) {
    int result = 0;
    int sign = 1; // To keep track of the sign, default is positive

    // Skip leading white spaces
    while (*s == ' ' || (*s >= 9 && *s <= 13))
        s++;

    // Check for the sign
    if (*s == '-' || *s == '+') {
        if (*s == '-')
            sign = -1;
        s++;
    }

    // Convert the string to an integer
    while (*s >= '0' && *s <= '9') {
        // Check for integer overflow
        if (result > INT_MAX / 10 || (result == INT_MAX / 10 && (*s - '0') > 7)) {
            return (sign == 1) ? INT_MAX : INT_MIN;
        }
        result = result * 10 + (*s - '0');
        s++;
    }

    return result * sign;
}
