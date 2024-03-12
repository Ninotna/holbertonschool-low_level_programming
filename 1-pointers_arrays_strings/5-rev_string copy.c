#include "main.h"
#include <stdio.h>

/**
 * rev_string - a function that reverses a string.
 * @s: pointer to the character array.
 * Return: a string
 */

void rev_string(char *s)
{
	int length = _strlen(s);
	int i = 0;
	int j = 0;
	char r[100];


    while (i != '\0')
    {
        r[i] = s[i];
        i++;
    }

	while (i >= 0)
	{
		s[i] = r[j];
		i--;
		j++;
	}
	_putchar('\n');
}
