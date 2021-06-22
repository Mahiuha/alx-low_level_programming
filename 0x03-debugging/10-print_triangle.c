#include "holberton.h"

/**
* print_triangle - prints a triangle line with hashtags
* @size: an int given by main
* Same as my 7 print diagonal. check that file and its comments
* Description: Uses headers to link and a nested loops to achieve goal
* can do one nested for instead of two. do a if j to i equality check
* Return: void. no return.
*/

void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
		_putchar('\n');
	for (i = 0; i < size; i++)
	{
		for (j = size - i - 1; j > 0; j--)
			_putchar(' ');
		for (j = i + 1; j > 0; j--)
			_putchar('#');
		_putchar('\n');
	}
}
