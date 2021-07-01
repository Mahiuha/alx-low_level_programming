#include "holberton.h"
#include <stdio.h>
/**
 * print_number - that prints an integer
 * @n: number to string
 * Returnn: nothing
 */

void print_number(int n)
{
	int pot_10 = 1, sign = 1, tmp = n;

	while (tmp / 10)
	{
		pot_10 *= 10;
		tmp /= 10;
	}

	if (tmp < 0)
	{
		sign *= -1;
		_putchar('-');
	}
	while (pot_10 > 0)
	{
		tmp = n / pot_10;
		_putchar((tmp * sign) + '0');
		n = n - (tmp * pot_10);
		pot_10 /= 10;
	}
}
