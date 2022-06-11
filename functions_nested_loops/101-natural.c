#include <stdio.h>

/**
 * main - Entry point.
 * Return: Always 0.
 */

int main(void)
{
	int n = 1024;
	int sum = 0;
	int current;

	for (current = n; current > 2; current--)
	{
		if ((current % 3 == 0) || (current % 5 == 0))
			sum = sum + current;
	}
	printf("%d\n", sum);
	return (0);


}
