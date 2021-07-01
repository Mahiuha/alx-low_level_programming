#include "holberton.h"

/**
* print_chessboard- prints the chess board
* @a: an array given by main
*
* Description- prints the chess board
* Return- none. void.
*/

void print_chessboard(char (*a)[8])
{
	int i;
	int j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
			_putchar(a[i][j]);
		_putchar(10);
	}
}
