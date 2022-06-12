#include <stdio.h>

/**
 * main - Entry point
 * Program that finds and prints the largest prime
 * factor of the number 612852475143
 *
 * Return: Always 0, on success.
 */

int main(void)
{
	long n = 612852475143;
	long largest = 2;
	long i = 2;

	while (n != 1)
	{
		while (n % i == 0)
		{
			n /= i;
			largest = i;
		}
		i++;
	}
		printf("%ld\n", largest);
		return (0);
}

