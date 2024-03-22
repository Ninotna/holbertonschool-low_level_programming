#include "variadic_functions.h"

/**
 * print_char - Helper function to print a character
 * @arg: Character argument
 */
void print_char(va_list arg)
{
	printf("%c", va_arg(arg, int));        /* Print the character argument */
}

/**
 * print_int - Helper function to print an integer
 * @arg: Integer argument
 */
void print_int(va_list arg)
{
	printf("%d", va_arg(arg, int));        /* Print the integer argument */
}

/**
 * print_float - Helper function to print a float
 * @arg: Float argument
 */
void print_float(va_list arg)
{
	printf("%f", va_arg(arg, double));     /* Print the float argument */
}

/**
 * print_string - Helper function to print a string
 * @arg: String argument
 */
void print_string(va_list arg)
{
	char *str = va_arg(arg, char *);       /* Retrieve the string argument */

	if (str == NULL)
	{
		str = "(nil)";                      /* Replace NULL pointer with (nil) */
	}
	printf("%s", str);                      /* Print the string */
}

/**
  * print_all - prints any argument passed into it
  * @format: formats symbols in order
  */
void print_all(const char * const format, ...)
{
	va_list args;
	const char *p = format;

	int need_separator = 0;

	int i;

	v_types valid_types[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_string},
		{'\0', NULL}
	};

	va_start(args, format);
	while (*p)
	{
		if (need_separator && (*p == 'c' || *p == 'i' || *p == 'f' || *p == 's'))
		{
			printf(", ");
		}
		i = 0;
		while (valid_types[i].specifier != '\0')
		{
			if (*p == valid_types[i].specifier)
			{
				valid_types[i].print_func(args);
				need_separator = 1;
				break;
			}
			i++;
		}
		p++;
	}
	va_end(args);
	printf("\n");
}
