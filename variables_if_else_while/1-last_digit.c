#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 *
 */
int main(void)
{
	int n;
	int last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	last = n % 10;
	printf("Last digit of %d is %d and is", n, last);
	if (last == 0)
		printf(" 0");
	else
	{
		if (last > 5)
			printf(" greater than 5");
		else
			printf(" less than 6 and not 0");
	}
	printf("\n");
	return (0);
}
