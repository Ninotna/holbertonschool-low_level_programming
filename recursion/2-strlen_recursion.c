#include "main.h"
#include <stdio.h>

/**
* _strlen_recursion - a function that returns the length of a string.
* @s: pointer to the string to convertv
* Return: the converted string.
*/

int _strlen_recursion(char *s)
{
	/* Base case: if the current character is '\0', return 0 */
	if (*s == '\0')
		return (0);

	/* Recursive case: return 1 plus the length of the rest of the string */
	return (1 + _strlen_recursion(s + 1));
}


