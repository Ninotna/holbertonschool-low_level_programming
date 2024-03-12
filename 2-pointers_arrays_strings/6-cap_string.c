#include "main.h"
#include <stdio.h>

/**
 * cap_string - function that capitalizes all words of a string.
 * @str: pointer to the string to convert
 * Return: the converted string.
 */

char *cap_string(char *str)
{
	int i, j;
	char sep[] = " \t\n,;.!?\"(){}";

	i = 0;

	if (str[0] >= 'a' && str[0] <= 'z')
	{
		str[0] -= ('a' - 'A');
	}

	while (str[i] != '\0')
	{
		for (j = 0; sep[j] != '\0' ; j++)
		{
			if ((str[i] >= 'a' && str[i] <= 'z') && str[i - 1] == sep[j])
				/* Convert lowercase to uppercase using ASCII values */
			{
				str[i] -= ('a' - 'A');
			}
		}
		i++;
	}
	return (str); /* Return the converted string */
}

