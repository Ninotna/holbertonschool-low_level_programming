#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* _strdup - function that returns a pointer
* to a newly allocated space in memory,
* which contains a copy of the string given as a parameter.
* @str: pointer to a string
* Return: a string
*/

char *_strdup(char *str)
{
	unsigned int i, len;
	char *_str;

	len = strlen(str);

	_str = (char *) malloc(len * sizeof(char));

	if (str == NULL || _str == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len; i++)
	{
		_str[i] = str[i];
	}
	_str[i] = '\0';

	free(_str);

	return (_str);

}
