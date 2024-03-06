#include "main.h"
#include <stdio.h>
#include <stddef.h>

/**
 * _strncmp - compares two strings within b bytes.
 * @s1: string to check
 * @s2: string to check from
 * @b: number of bytes to check
 * Return: 0 if strings are the same
 * any other number if they are different.
 */
int _strncmp(char *s1, char *s2, unsigned int b)
{
	unsigned int i;
	for (i = 0; i <= b && *s1 == *s2 && *s1 != '\0' && *s2 != '\0'; i++)
	{
		s1++;
		s2++;
	}
	return (i - b);
}

/**
 * _strstr - a function that locates a substring.
 * @haystack: string
 * @needle: substring to locate
 * Return: a pointer to the located substring, or NULL if not found.
 */

char *_strstr(char *haystack, char *needle)
{

    while(*haystack != '\0')
    {
        if (*haystack == *needle) 
        {
            return (haystack);
        }
    }
    return ((*haystack == *needle) ? haystack : NULL);
}
