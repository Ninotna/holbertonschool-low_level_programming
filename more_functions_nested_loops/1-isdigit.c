#include "main.h"

/**
 * _isupper - function that checks for a digit (0 through 9).
 * @car : integer
 * Return: 1 or 0
 */

int _isdigit(int c)
    {
        if (c >= 0 && c <= 9)
            {
                return (1);
            }
        else
            {
                return (0);
            }
    }