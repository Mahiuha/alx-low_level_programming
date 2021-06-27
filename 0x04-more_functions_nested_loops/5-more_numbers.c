#include "holberton.h"

/**
* more_numbers - prints 10 lines of 1-14
* Description: Uses headers to link and a nested loops to achieve goal
* Return: void. no return.
*/

void more_numbers(void)
{
	int i = 0, j = 0;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j >= 10)
				_putchar('1');
			_putchar((j % 10) + '0');
		}
		_putchar('\n');
	}
}
