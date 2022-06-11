#include <stdio.h>

/**
 * main - Entry point, program that prints first 50 fibonacci numbers.
 * Return: Always 0.
 */

int main(void)
{
	long int first, second, third;
	int i;

	first = 1;
	second = 2;
	printf("1, 2");
	for (i = 0; i < 48; i++)
	{
		third = first + second;
		printf(", %ld", third);
		first = second;
		second = third;
	}
	printf("\n");
	return (0);
}
