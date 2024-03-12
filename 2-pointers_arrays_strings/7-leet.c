#include "main.h"
#include <stdio.h>

/**
 * leet - a function that encodes a string into 1337.
 * @str: pointer to the string to convert
 * Return: the converted string.
 */

char *leet(char *str)
{
	int i, j;
	char input[] = "aAeEoOtTlL";
	char output[] = "43071";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; input[j] != '\0'; j++)
		{
			if (str[i] == input[j])
			{
				str[i] = output[j / 2];
			}
		}
	}
return (str);
}


