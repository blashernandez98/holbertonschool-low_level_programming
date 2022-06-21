#include <stdio.h>

/**
 * main - Main function of program. Entry point.
 * @argc: Number of arguments passed to main.
 * @argv: Pointer to array of strings of arguments.
 * Return: 0 always.
 */

int main(__attribute__ ((unused)) int argc, char **argv)
{
	while (*argv)
		printf("%s\n", *argv++);

	return (0);
}
