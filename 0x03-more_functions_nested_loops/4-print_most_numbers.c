#include "holberton.h"

/**
* print_most_numbers - prints 0-9 with a new line, excludes 2 and 4
* Description: Uses headers to link and a nested loops to achieve goal
* Return: void. no return.
*/

void print_most_numbers(void)
{
	int i = 0;

	for (i = 0; i < 10; i++)
		if (i != 2 && i != 4)
			_putchar(i + '0');
	_putchar('\n');
}
