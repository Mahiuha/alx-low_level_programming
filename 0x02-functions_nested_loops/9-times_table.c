#include "holberton.h"

/**
* times_table - prints out the 9 multiplication table
* Description: Uses headers to link to another function and loops for output
* Return: int 0 when done and no errors
* I can reduce the amount of code if fewer lines needed. I can make a function
* which does both putchar ',' and '  '. I can replace
* purchar tens and ones into one.
*/

void times_table(void)
{
	int i, j, whole, tens, ones = 0;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			whole = i * j;
			tens = whole / 10 + '0';
			ones = whole % 10 + '0';
			if (j == 0)
			{
				_putchar('0');
				_putchar(',');
				_putchar(' ');
			}
			else if (j == 9)
			{
				if (whole > 10)
				{
					_putchar(tens);
					_putchar(ones);
				}
				else
				{
					_putchar(' ');
					_putchar(ones);
				}
			}
			else if (whole < 10)
			{
				_putchar(' ');
				_putchar(ones);
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar(tens);
				_putchar(ones);
				_putchar(',');
				_putchar(' ');
			}
		}
	_putchar('\n');
	}
}
