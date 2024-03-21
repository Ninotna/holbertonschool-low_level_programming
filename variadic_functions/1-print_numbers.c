#include "variadic_functions.h"

/**
* print_numbers - a function that prints numbers, followed by a new line.
* @separator: pointer to a const char
* @n: const unsigned int
* @...: variable list of arguments
* Return: sum of all arguments
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list args; /* pointer to arguments*/


va_start(args, n);

for (i = 0 ; i < n; i++)
{
printf("%d", va_arg(args, int));
if (separator != NULL && i < n - 1)
{
	printf("%s", separator);
}
}
printf("\n");

va_end(args);
}
