#include "holberton.h"

/**
* print_last_digit - prints the last digit
* @x: an int that takes in a number from main
*
* Description: Uses headers to link to another function and checcks stuff
* Return: int 0 when done and no errors
*/

int print_last_digit(int x)
{
	int i = x % 10;

	if (x > 0)
	{
		_putchar(i + '0');
		return (i);
	}
	else if (x < 0)
	{
		_putchar(-i + '0');
		return (-i);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
