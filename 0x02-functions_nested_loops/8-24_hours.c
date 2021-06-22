#include "holberton.h"

/**
* jack_bauer - prints the time from 00:00 to 23:59
* Description: Uses headers to link to another function and checks stuff
* Probably could just do an easy bit check for the first bit field
* Return: int 0 when done and no errors
*/

void jack_bauer(void)
{
	int i, j, hour1, hour2, minute1, minute2;

	for (i = 0; i <= 23; i++)
	{
		hour1 = i / 10 + '0';
		hour2 = i % 10 + '0';
		for (j = 0; j <= 59; j++)
		{
			minute1 = j / 10 + '0';
			minute2 = j % 10 + '0';
			_putchar(hour1);
			_putchar(hour2);
			_putchar(':');
			_putchar(minute1);
			_putchar(minute2);
			_putchar('\n');
		}
	}
}
