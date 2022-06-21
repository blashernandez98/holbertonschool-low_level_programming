#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * pure_number - Checks if a string is only digits.
 * @s: String to check
 * Return: 1 if only numbers, 0 otherwise.
 */

int pure_number(char *s)
{
	while (*s)
	{
		if (!(isdigit(*s)))
			return (0);
		s++;
	}
	return (1);
}

/**
 * main - Entry Point.
 * ****** Function that adds ints passed as arguments
 * @argc: Number of args passed to main.
 * @argv: Pointer to array of args.
 * Return: 0 on success, 1 otherwise.
 */

int main(int argc, char **argv)
{
	int a, res = 0;

	while (--argc)
	{
		a = atoi(argv[argc]);

		if (pure_number(argv[argc]))
			res += a;
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", res);
	return (0);
}
