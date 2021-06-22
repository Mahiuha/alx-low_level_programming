#include "holberton.h"

/**
* print_times_table - prints out the n multiplication table
* @n: an int given by the main to print ut a n by n grid
* Description: Uses headers to link to another function and loops for output
* A: We check if n 0 and do that case first,
* if not then we check if n is in range
* B: I multiply the row by column and the digit values range from 0-100
* so I did the math to get the first digit, middle digit, and last digit.
* I stored them in variables that are self explanatory.
* C: If j == 0, then we are at the very left column, that format is
* different than the rest so we just print 0 with punctuation.
* D: If j == n then we are at the very right column and we want to
* print without the punctuation endings.
* E: Here we check the product, starting if its small and up to if
* it’s big. If it is a 1 digit number we print out the
* punctuation and the 1 number, if it was bigger than 10 but less
* than 100 then we print tens and ones with the punctuation. Etc.
* Extra tips I learned: I saw code during the peer review that could
* greatly cut down the specific formatting checks I have I could print 0s
* for the left most column if I move that code to the outer loop,
* I could print spaces first then numbers last instead of
* sometimes putting spacing at the end. 
* And those would cut down my lines by a ton.
*/

void print_times_table(int n)
{
	int i, j, whole, benjamin, tens, ones = 0;

	if (n == 0)
	{
		_putchar('0');
		_putchar('\n');
	}
	else if (n <= 15 && n >= 0)/* A */
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				whole = i * j;/* B */
				benjamin = whole / 100 + '0';
				tens = ((whole / 10) % 10) + '0';
				ones = whole % 10 + '0';
				if (j == 0)/* C */
				{
					_putchar('0');
					_putchar(',');
					_putchar(' ');
				}
				else if (j == n)/* D */
				{
					if (whole >= 100)
					{
						_putchar(benjamin);
						_putchar(tens);
						_putchar(ones);
					}
					else if (whole >= 10)
					{
						_putchar(' ');
						_putchar(tens);
						_putchar(ones);
					}
					else
					{
						_putchar(' ');
						_putchar(' ');
						_putchar(ones);
					}
				}
				else if (whole < 10)/* E */
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(ones);
					_putchar(',');
					_putchar(' ');
				}
				else if (whole < 100)
				{
					_putchar(' ');
					_putchar(tens);
					_putchar(ones);
					_putchar(',');
					_putchar(' ');
				}
				else
				{
					_putchar(benjamin);
					_putchar(tens);
					_putchar(ones);
					_putchar(',');
					_putchar(' ');

				}
			}
		_putchar('\n');
		}

	}
}
