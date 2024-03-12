#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* str_concat - a function that concatenates two strings.
* @s1: pointer to a string
* @s2: pointer to a string
* Return: a string
*/

char *str_concat(char *s1, char *s2)
{
	int i, j, k;
	int buffer;
	char *res;

	for (i = 0; s1[i] != '\0'; i++)
	;

	for (j = 0; s2[j] != '\0'; j++)
	;

	buffer = i + j + 1;

	res = (char *) malloc((buffer) * sizeof(char));

	if (res == NULL)
	{
		return (NULL);
	}

	for (k = 0; k < i + j; k++)
	{
		if (k < i)
		{
		res[k] = s1[k];
		}
		else
		{
			res[k] = s2[k - i];
		}
	}
		res[k] = '\0';

	return (res);
}
