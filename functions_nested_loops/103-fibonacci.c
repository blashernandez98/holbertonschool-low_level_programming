#include <stdio.h>

/**
 * main - Entry point, program that prints the sum of
 * ****** all even fibonacci numbers < 4.000.000.
 * Return: Always 0.
 */

int main(void)
{
	long int first, second, third, sum;
	int i;

	first = 1;
	second = 2;
	sum = 2;
	for (i = 0;(first + second < 4000000); i++)
	{
		third = first + second;
		if (third % 2 == 0)
			sum = sum + third;
		first = second;
		second = third;
	}
	printf("%ld\n", sum);
	return (0);
}
