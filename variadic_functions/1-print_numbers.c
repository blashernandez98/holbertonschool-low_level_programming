#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include "variadic_functions.h"
#include <string.h>

/**
 * print_numbers - Prints numbers passed to it with separator.
 * @separator: String separator.
 * @n: Number of integers passed to it.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
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
			printf("%d%s", va_arg(arg_ptr, int), s);
		}
		printf("%d", va_arg(arg_ptr, int));
	}
	printf("\n");
}
