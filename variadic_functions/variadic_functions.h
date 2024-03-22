#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * struct v_types - Struct to map format specifiers
 * to corresponding print functions
 * @specifier: Format specifier character
 * @print_func: Pointer to the corresponding print function
 */
typedef struct v_types
{
	char specifier;

	void (*print_func)(va_list arg);
} v_types;

int sum_them_all(const unsigned int n, ...);

void print_numbers(const char *separator, const unsigned int n, ...);

void print_strings(const char *separator, const unsigned int n, ...);

void print_all(const char * const format, ...);

#endif
