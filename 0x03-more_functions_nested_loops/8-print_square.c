#include "holberton.h"

/**
* print_square - prints a size by size square
* @size: an int given by main
*
* Description: Uses headers to link and a nested loops to achieve goal
* Return: void. no return.
*/

void print_square(int size)
{
	int i, j;


	if (size <= 0)
		_putchar('\n');
	for (i = size; i > 0; i--)
	{
		for (j = size; j > 0; j--)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
