#include "holberton.h"

/**
* print_alphabet_x10 - program that shows the alphabet 10 times
* Description: Uses headers to link to another function and a nested loop
* Return: int 0 when done and no errors
*/

void print_alphabet_x10(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 25; j++)
		{
			_putchar(j + 'a');
		}
		_putchar(10);
	}
}
