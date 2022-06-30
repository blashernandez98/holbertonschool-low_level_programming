#include "3-calc.h"
#include "3-get_op_func.c"

/**
 * main - Simple calculator
 * @argc: Number of arguments passed.
 * @argv: Array of arguments.
 *
 * Return: 0 on success. 98 ir argc is not 4. 99 if wrong operator.
 * 100 if user tries to divide by 0.
 */

int main(int argc, char *argv[])
{
	int a, b, res;
	int (*f)(int, int);

	if (argc != 4)
	{
		printf("Error\n")
		exit(98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	
	f = get_op_func(argv[2]);
	
	if (!f)
	{
		printf("Error\n");
		exit(99);
	}

	if (b == 0 && (argv[2] == '/' || argv[2] == '%'))
	{
		printf("Error\n");
		exit(100);
	}

	res = (*f)(a, b);
	printf("%d\n", res);

	return (0);
}
