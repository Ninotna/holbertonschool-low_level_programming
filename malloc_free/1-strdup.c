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
	char *strbis;

	if (str == NULL)
	{
		return (NULL);
	}
	for (len = 0; str[len] != '\0'; len++)
	;

	strbis = (char *)malloc((len + 1) * sizeof(char));
	/* +1 for null terminator */

	if (strbis == NULL)
	{
		printf("Erreur : allocation de mémoire a échoué.\n");
		return (NULL);
	}

	for (i = 0; i < len; i++)
	{
		strbis[i] = str[i];
	}
	strbis[i] = '\0';


	return (strbis);
}
