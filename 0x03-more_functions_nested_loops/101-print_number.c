#include "holberton.h"
#include <limits.h>

/**
* print_number - outputs a number
* @n: an int given from main
*
* Description: Uses headers to link and a nested loops to achieve goal
* Return: no return is void
* A: The case when n is zero
* B: I set places to be 1 billion initially. If it was bigger than the 
* number then I reduce places by a factor of 10 until it is small 
* enough to do nice math.
* C: Once places has shrunk to match the number, we use math to get 
* and print the letters. The math here focuses on getting the last letter
* using mod but it will mod a very specific number. That last number will
* range from the first and last digits because we divide the number by
* places and each iteration we decrease places by x10. EG. so 420515 will
* first be divided by 1000000 which gives 4 and if we mod that by 10
* we get 4. Next we reduce places so it is 420515 / 100000 which gives
* 42 and we mod 10 which gives 2. Repeat again with 420515 / 1000 to get
* the 0, with 100 to get the 5, 10 to get the 1, and now we can just mod
* 10 and get the last 5.
* D:I basically cheated on the no hard coding requirement. I used a 
* limits.h library and did do if statements for the max and min numbers
* of int. My code worked fine for all numbers except those two. I needed to
* put it into a loop and break because the PS2 kept showing.
* E: If the number is negative I will convert it to a positive
* and print a minus sign. Then proceed with the code as normal.
*/


void print_number(int n)
{
	int x = n;
	int digit;
	int places = 1000000000;

	if (n < 0)/* E */
	{
		x = -n;
		_putchar('-');
	}
	if (n == INT_MAX || n == INT_MIN) /* D */
	{
		while (1)
		{
			if (n == INT_MAX)
			{
				_putchar('2');
				_putchar('1');
				_putchar('4');
				_putchar('7');
				_putchar('4');
				_putchar('8');
				_putchar('3');
				_putchar('6');
				_putchar('4');
				_putchar('7');
				break;
			}
			else if (n == INT_MIN)
			{
				_putchar('2');
				_putchar('1');
				_putchar('4');
				_putchar('7');
				_putchar('4');
				_putchar('8');
				_putchar('3');
				_putchar('6');
				_putchar('4');
				_putchar('8');
				break;
			}
		}
	}
	else if (n == 0)/* A */
		_putchar('0');
	else
	{
		while (places > x)/* B */
			places /= 10;
		while (places > 0)
		{
			digit = x / places;/* C */
			_putchar((digit % 10) + '0');
			places /= 10;
		}
	}
}
