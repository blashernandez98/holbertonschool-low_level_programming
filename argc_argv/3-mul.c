#include <stdio.h>
#include <stdlib.h>

/**
 * main - Main function of program. Entry point.
 * @argc: Number of arguments passed to main.
 * @argv: Pointer to array of strings of arguments.
 * Return: 0 always.
 */

int main(int argc, char **argv)
{
	int a, b;

	if (argc == 3)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		printf("%d\n", (a * b));
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
