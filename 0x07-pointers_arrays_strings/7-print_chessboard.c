#include "holberton.h"
/**
 * print_chessboard - print the chessboard
 *
 * @a: pointer to array
 *
 * Description: this print the chessboard
 * Return: a char
 */
void print_chessboard(char (*a)[8])
{
	int b, c;

	for (b = 0; b < 8; b++)
	{
		for (c = 0; c < 8; c++)
		{
			_putchar(a[b][c]);
		}
		_putchar('\n');
	}
}
