#include "main.h"
#include "string.h"
#include <stdio.h>

/**
 * rev_string - a function that reverses a string.
 * @s: pointer to the character array.
 * Return: a string
 */

void rev_string(char *s)
{
	int length = strlen(s);
	int i = 0;
    char r[100];


    while (length -i -1 >= 0)
    {
        s[i] = r[length - i - 1];
        i++;
    }
    s[i++] = '\0';
}
