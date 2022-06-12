#include <stdio.h>

/**
 * isprime - Function that evaluates a number as prime.
 * @n: Number to evaluate.
 *
 * Return: 1 if @n is prime, 0 otherwise.
 */

int isprime(unsigned long int n)
{
	unsigned long int i;
	for (i = n / 2; i > 3; i--)
	{
		if (n % i == 0)
			return (0);
	}
	return (1);
}


/**
 * main - Entry point
 * Program that finds and prints the largest prime
 * factor of the number 612852475143
 */

int main(void)
{
	unsigned long int n = 612852475143;
	unsigned long int i, largest;

	for (i = n / 2; i > 0; i--)
	{
		if ((n % i == 0) && (isprime(largest) == 1))
			largest = i;
	}
	printf("%ld\n", largest);
	return (0);
}
