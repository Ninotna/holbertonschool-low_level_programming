#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _atoi - converts a string to an integer.
 * @s: the string to convert
 * Return: the converted string.
 */

int _atoi(char *s)
{
    int i = 0;
    int result = 0;
    int sign = 1; /* Initialize sign to positive */

    /* Skip leading whitespace */
    while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
    {
        i++;
    }

    /* Check for sign */
    if (s[i] == '-')
    {
        sign = -1;
        i++;
    }
    else if (s[i] == '+')
    {
        i++;
    }

    /* Convert digits to integer */
    while (s[i] >= '0' && s[i] <= '9')
    {
        result = result * 10 + (s[i] - '0');
        i++;
    }

    /* Apply sign */
    return sign * result;
}
