#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include "variadic_functions.h"
#include <string.h>

/**
 * after_print - Deals with everything after a succesful print.
 * @format_ptr: Pointer to format string.
 */

void after_print(const char * const format_ptr)
{
	if (strpbrk(format_ptr + 1, "cifs"))
		printf(", ");
}

/**
 * print_all - Prints all variable arguments passed to it.
 * @format: String specifiying type of variable args.
 */

void print_all(const char * const format, ...)
{
	va_list arg_ptr;
	char *sarg;
	int i = 0;

	va_start(arg_ptr, 0);

	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(arg_ptr, int));
				after_print(format + i);
				break;
			case 'i':
				printf("%d", va_arg(arg_ptr, int));
				after_print(format + i);
				break;
			case 's':
				sarg = va_arg(arg_ptr, char *);
				if (sarg)
				{
					printf("%s", sarg);
					after_print(format + i);
					break;
				}
				printf("(nil)");
				after_print(format + i);
				break;
			case 'f':
				printf("%f", va_arg(arg_ptr, double));
				after_print(format + i);
				break;
			default:
				break;
		}
		i++;
	}
	printf("\n");
}
