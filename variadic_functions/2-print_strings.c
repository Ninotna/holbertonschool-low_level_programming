#include "variadic_functions.h"

/**
* print_strings - a function that prints strings, followed by a new line.
* @separator: pointer to a const char
* @n: const unsigned int
* @...: variable list of arguments
* Return: sum of all arguments
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	const char *str;

	va_start(args, n); /* Initialize the argument list */

	for (i = 0; i < n; i++)
	{
		/* Retrieve the next argument, assumed to be a string */
		str = va_arg(args, const char *);

		/* Print (nil) if the string is NULL, otherwise print the string */
		printf("%s", str ? str : "(nil)");

		/* Print the separator if it's not NULL and if it's not the last string */
		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}

	va_end(args); /* Clean up the argument list */

	/* Print a new line at the end */
	printf("\n");
}

