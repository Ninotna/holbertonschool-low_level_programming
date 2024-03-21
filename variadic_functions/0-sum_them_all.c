#include "variadic_functions.h"

/**
 * sum_them_all - a function that returns the sum of all its parameters.
 * @n: number of args
 * @...: variable list of arguments
 * Return: sum of all arguments
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, total;
	va_list args; /* pointer to arguments*/

	total = 0;

	if (n == 0)
	{
		return (0);
	}

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		total += va_arg(args, int);
	}
	va_end(args);
	return (total);
}

