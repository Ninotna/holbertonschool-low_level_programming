#include "main.h"
#include <stdio.h>

/**
 * cap_string - function that capitalizes all words of a string.
 * @str: pointer to the string to convert
 * Return: the converted string.
 */
char *cap_string(char *s)
{
	int i, j;
	char sep[] = " \t\n,;.!?\"(){}";

	i = 1;
	if (s[0] >= 'a' && s[0] <= 'z')
		s[0] -= ('a' - 'A');
	while (s[i] != '\0')
	{
		for (j = 0; sep[j] != '\0'; j++)
			if (s[i - 1] == sep[j] && (s[i] >= 'a' && s[i] <= 'z'))
				s[i] -= ('a' - 'A');
		i++;
	}
	return (s);
}

