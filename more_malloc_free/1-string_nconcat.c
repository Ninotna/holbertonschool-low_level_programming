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

#include <stdlib.h> /* For malloc */

char *string_nconcat(char *s1, char *s2, unsigned int n) 
{

	char *p;

	unsigned int s1count, s2count, sizeBuffer, i;

	/* Initialize counters */
	s1count = 0;
	s2count = 0;

	/* Use empty strings if NULL pointers are provided */
	if (s1 == NULL) 
	{
		s1 = "";
	}
	if (s2 == NULL) 
	{
		s2 = "";
	}

	/* Count the length of s1 */
	while (s1[s1count] != '\0') 
	{
		s1count++;
	}

	/* Count the length of s2 */
	while (s2[s2count] != '\0') 
	{
		s2count++;
	}

	/* Limit s2count to n if n is smaller */
	if (s2count > n) 
	{
		s2count = n;
	}

	/* Calculate the buffer size (including space for the null terminator) */
	sizeBuffer = s1count + s2count + 1;

	/* Allocate memory for the new string */
	p = (char *)malloc(sizeBuffer * sizeof(char));
	if (p == NULL) 
	{
		return (NULL);
	}

	/* Copy s1 to the new string */
	for (i = 0; i < s1count; i++) 
	{
		p[i] = s1[i];
	}

	/* Concatenate n characters of s2 to the new string */
	for (i = 0; i < s2count; i++) 
	{
		p[i + s1count] = s2[i];
	}

	/* Null-terminate the new string */
	p[s1count + s2count] = '\0';

	return (p);
}



