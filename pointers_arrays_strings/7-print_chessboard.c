#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - Function that prints a chessboard.
 * @a: Pointer to first element of an array of char pointers.
 */

void print_chessboard(char (*a)[8])
{
	char rank, file;

	for (rank = 0; rank < 8; rank++)
	{
		for (file = 0; file < 8; file++)
		{
			printf("%c", a[rank][file]);
		}
		printf("\n");
	}

}
