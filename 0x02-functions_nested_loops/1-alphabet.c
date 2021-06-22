#include "holberton.h"

/**
* print_alphabet - program that prints out the alphabet with a new line
* Description: Uses headers to link to another function
* Return: int 0 when done and no errors
*/

void print_alphabet(void)
{
	int i;

	i = 0;
	while (i <= 25)
	{
		_putchar(i + 'a');
		i++;
	}
	_putchar(10);
}
