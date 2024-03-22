#include "variadic_functions.h"

/**
* print_all - A function that prints anything.
* @format: pointer to a const char
* @...: variable list of arguments
* Return: sum of all arguments
*/

void print_string_with_separator(const char *s, const char *separator, int print_separator)
{
    if (s)
    {
        printf("%s", s);
    }
    else
    {
        printf("(nil)");
    }
    if (print_separator)
    {
        printf("%s", separator);  /* Print the separator only if required */
    }
}

void print_all(const char *format, ...)
{
    va_list args;
    const char *p;
    char c;
    char *s;
    int i;
    double f;
    const char *separator = ", ";  /* Define a default separator */

    va_start(args, format);

    p = format;
    while (*p != '\0')
    {
        int print_separator = (*(p + 1) != '\0');

        if (*p == 'c')
        {
            c = (char)va_arg(args, int);
            printf("%c", c);
            if (print_separator)
            {
                printf("%s", separator);
            }
        }
        else if (*p == 'i')
        {
            i = va_arg(args, int);
            printf("%d", i);
            if (print_separator)
            {
                printf("%s", separator);
            }
        }
        else if (*p == 'f')
        {
            f = va_arg(args, double);
            printf("%f", f);
            if (print_separator)
            {
                printf("%s", separator);
            }
        }
        else if (*p == 's')
        {
            s = va_arg(args, char *);
            print_string_with_separator(s, separator, print_separator);
        }
        p++;
    }

    va_end(args);
    printf("\n");
}

