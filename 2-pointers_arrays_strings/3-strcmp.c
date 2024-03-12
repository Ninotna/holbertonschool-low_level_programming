#include "main.h"
#include <stdio.h>

/**
 * _strcmp - Write a function that compares two strings.
 * @s1: pointer to the dest str
 * @s2: pointer to the src str
 * Return: S1
 */

int _strcmp(char *s1, char *s2)
{
	int i, res;

for (i = 0; s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i]; i++)
;
	res = s1[i] - s2[i];

return (res);
}
