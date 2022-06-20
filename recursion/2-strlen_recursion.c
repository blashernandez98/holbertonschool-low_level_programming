#include "main.h"

/**
 * _strlen_recursion - Similar to std lib function "strlen".
 * @s: String to measure length.
 */

int _strlen_recursion(char *s)
{
	if (*s)
		return (1 + _strlen_recursion(s + 1));
	return (0);
}
