#include "main.h"

/**
 * print_alphabet - Entry point.
 * This program prints the alphabet in lowercase in order followed by a newline
 *
 * Return: Always 0 (on success).
 */
void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
	return;
}
