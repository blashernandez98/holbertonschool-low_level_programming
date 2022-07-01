#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include "variadic_functions.h"
#include <string.h>

/**
 * after_format - Deals with everything after a succesful print.
 * @args_ptr: Pointer to int args.
 */

void after_format(int *args_ptr)
{
	*args_ptr = *args_ptr - 1;
	if (*args_ptr)
		printf(", ");
}

/**
 * count_format - Counts number of chars that match format.
 * @s: String passed as format.
 * Return: Number of correct format chars.
 */

int count_format(const char * const s)
{
	int i = 0, res = 0;
	const char * const format = "cifs";

	while (s[i])
	{
		if (strchr(format, s[i]))
			res++;
		i++;
	}
	return (res);
}

/**
 * print_all - Prints all variable arguments passed to it.
 * @format: String specifiying type of variable args.
 */

void print_all(const char * const format, ...)
{
	va_list arg_ptr;
	char *str_format;
	int i = 0, args;

	va_start(arg_ptr, 0);
	args = count_format(format);

	while (format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(arg_ptr, int));
				after_format(&args);
				break;
			case 'i':
				printf("%d", va_arg(arg_ptr, int));
				after_format(&args);
				break;
			case 's':
				printf("%s", va_arg(arg_ptr, char *));
				after_format(&args);
				break;
			case 'f':
				printf("%f", va_arg(arg_ptr, double));
				after_format(&args);
				break;
			default:
				break;
		}
		i++;
	}
	printf("\n");
}
