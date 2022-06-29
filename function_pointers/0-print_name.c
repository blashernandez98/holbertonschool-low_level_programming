#include "function_pointers.h"

/**
 * print_name: Function that prints a name.
 * @name: Name to print.
 * @f: Pointer to function that prints.
 */

void print_name(char *name, void (*f)(char *str))
{
	*f(name);
}
