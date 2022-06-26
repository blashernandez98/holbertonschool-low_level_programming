#include "main.h"
#include <stddef.h>
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - Concatenates all arguments of your program.
 * @ac: Number of arguments.
 * @av: Pointer to array of arguments.
 * Return: Pointer to new string of concat args.
 */

char *argstostr(int ac, char **av)
{
	char *str = NULL;
	int i, j, k, size = 0;

	if (ac && av)
	{
		for (i = 0; i < ac; i++)
			size += strlen(av[i]);
		str = malloc(sizeof(char) * (size + ac + 1));
		if (str)
		{
			i = 0;
			for (j = 0; j < ac; j++, i++)
			{
				for (k = 0; av[j][k]; i++, k++)
					str[i] = av[j][k];
				str[i] = '\n';
			}
			str[i] = '\0';
		}
	}
	return (str);
}
