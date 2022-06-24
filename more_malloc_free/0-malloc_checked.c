#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Safely allocated memory
 * @b: bytes to allocate
 * Return: Pointer to buffer of allocated memory.
 */

void *malloc_checked(unsigned int b)
{
	void *res = malloc(b);
	if (!res)
		exit(98);
	return (res);
}
