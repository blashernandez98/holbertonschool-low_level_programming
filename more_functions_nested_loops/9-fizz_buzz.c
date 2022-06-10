#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 */

void main(void)
{
	int i;

	for (i = 0; i < 100; i++)
	{
		if (i % 3 == 0)
			puts("Fizz");
		if (i % 5 == 0)
			puts("Buzz");
		if ((i % 3 != 0) && (i % 5 != 0))
			printf("%d", i);
		printf(" ");
	}
	printf("\n");
}
