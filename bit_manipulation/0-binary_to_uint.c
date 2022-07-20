#include "main.h"
#include <string.h>

int pow2(int power)
{
	int i = 0, res = 1;
	
	for (i = 0; i < power; i++)
		res *= 2;
	return (res);
}

unsigned int binary_to_unit(const char *b)
{
	int len, i, pow;
	unsigned int res = 0;

	if (b)
	{
		len = strlen(b);
		pow = len - 1;
		for (i = 0; i < len; i++, pow--)
		{
			if (b[i] == '1')
				res += pow2(pow);
			if (b[i] != '1' && b[i] != '0')
				return (0);
		}
	}
	return (res);
}
