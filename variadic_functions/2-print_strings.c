#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include "variadic_functions.h"
#include <string.h>

/**
 * print_strings - Prints strings passed to it with separator.
 * @separator: String separator.
 * @n: Number of strings passed to it.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list arg_ptr;
	unsigned int i;
	char *s;

	va_start(arg_ptr, NULL);

	if (n)
	{
		if (!separator)
			s = "";
		else
			s = strdup(separator);
		for (i = 0; i < n - 1; i++)
		{
			printf("%s%s", va_arg(arg_ptr, char *), s);
		}
		printf("%s", va_arg(arg_ptr, char *));
	}
	printf("\n");
}
