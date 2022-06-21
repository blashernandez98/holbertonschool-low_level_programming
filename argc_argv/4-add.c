#include <stdio.h>
#include <stdlib.h>

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
		if (a)
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
