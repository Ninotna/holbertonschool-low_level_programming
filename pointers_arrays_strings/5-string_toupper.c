#include "main.h"
#include <stdio.h>

/**
 * string_toupper - converts all lowercase letters of a string to uppercase.
 * @str: pointer to the string to convert
 * Return: the converted string.
 */
char *string_toupper(char *str)
{
	int index = 0;

	while (str[index] != '\0')
	{
		/* Check if the current character is lowercase */
		if (str[index] >= 'a' && str[index] <= 'z')
		{
			/* Convert lowercase to uppercase using ASCII values */
			str[index] -= ('a' - 'A');
		}
		index++; /* Move to the next character */
	}

	return (str); /* Return the converted string */
}

