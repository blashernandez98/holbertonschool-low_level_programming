#include <stdarg.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
 * sum_them_all - Sums all the arguments passed to it.
 * @n: Fixed argument.
 * @...: Variable number of int args.
 * Return: Sum of args.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list arg_ptr;
	int i, sum = 0;

	va_start(arg_ptr, NULL);
	for (i = 0; i < n, i++)
		sum += va_arg(arg_ptr, int);
	return (sum);
}
