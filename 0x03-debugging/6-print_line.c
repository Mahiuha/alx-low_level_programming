#include "holberton.h"

/**
* print_line - prints underscores a number of times
* @n: an int given by main
*
* Description: Uses headers to link and a nested loops to achieve goal
* Return: void. no return.
*/

void print_line(int n)
{
	while (n > 0)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}

