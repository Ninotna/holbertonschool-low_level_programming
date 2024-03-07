#include "main.h"
#include <stdio.h>

/**
* factorial - a function that returns the length of a string.
* @n: n factorial
* Return: the result of the factorial(n)
*/

int factorial(int n)
{

if (n <= 1)
{
	return (1);
}
return (n * factorial(n - 1));
}


