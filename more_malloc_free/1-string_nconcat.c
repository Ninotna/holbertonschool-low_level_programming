#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* string_nconcat - a function that concatenates two strings.
* @s1: pointer to s1
* @s2: pointer to s2 (n bytes of s2)
* @n: integer
*Return: pointer to the alloc memory
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int s1len, s2len, i, buffer_s;

	s1len = s2len = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[s1len])
	s1len++;

	while (s2[s2len])
	s2len++;

	s2len > n ? (s2len = n) : (n = s2len);

	buffer_s = s1len + s2len + 1;
	p = malloc((buffer_s) * sizeof(char));

	if (p == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < buffer_s - 1; i++)
		i < s1len ? (p[i] = s1[i]) : (p[i] = s2[i - s1len]);

	p[buffer_s] = '\0';
	return (p);
}
