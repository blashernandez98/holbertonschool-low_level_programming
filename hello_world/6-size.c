#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0. (on success)
 *
 */

int main(void)
{
	char c;
	int i;
	long int l;
	long long int ll;
	float f;

	printf("Size of a char: %d byte(s)", sizeof(c));
	printf("Size of an int: %d byte(s)", sizeof(i));
	printf("Size of a long int: %d byte(s)", sizeof(l));
	printf("Size of a long long int: %d byte(s)", sizeof(ll));
	printf("Size of a float: %d byte(s)", sizeof(f));
	return (0);
}
