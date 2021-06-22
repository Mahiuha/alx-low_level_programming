#include "holberton.h"

/**
* print_to_98 - function that types n to 98
* @n: An int given by main
*
* Description: Uses headers to link to another function and loops for output
* IM SUCH A F***EN IDIOT I WAS ALLOWED TO USE THE STANDARD LIBRAY FOR THIS
* PROBLEM ERMAAAHHGAWDD I DIDNT NEED 100 LINES ONLY LIKE 40
*/

void print_to_98(int n)
{
	int i, a, b, benjamin;

	if (n == 98)
	{
		_putchar('9');
		_putchar('8');
		_putchar('\n');
	}
	else if (n > 98)/* if n is bigger than 98 */
	{
		for (i = n; i >= 98; i--)
		{
			if (i >= 100)/* if n is bigger than 100*/
			{
				benjamin = i / 100 + '0';
				a = ((i / 10) % 10) + '0';
				b = i % 10 + '0';
				_putchar(benjamin);
				_putchar(a);
				_putchar(b);
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				a = i / 10 + '0';
				b = i % 10 + '0';
				_putchar(a);
				_putchar(b);
				if (i != 98)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
		}
		_putchar('\n');
	}
	else /* n is less than 98*/
	{
		for (i = n; i <= 98; i++)
		{
			if (i < 0 && i <= -100)/* for -100 and beyond*/
			{
				_putchar('-');
				benjamin = -i / 100 + '0';
				a = ((-i / 10) % 10) + '0';
				b = -i % 10 + '0';
				_putchar(benjamin);
				_putchar(a);
				_putchar(b);
				_putchar(',');
				_putchar(' ');
			}
			else if (i < 0 && i <= -10)/* for -10 and beyond*/
			{
				_putchar('-');
				a = -i / 10 + '0';
				b = -i % 10 + '0';
				_putchar(a);
				_putchar(b);
				if (i != 98)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			else if (i < 0 && i > -10)/* for -9 to -1 */
			{
				_putchar('-');
				b = (-i % 10) + '0';
				_putchar(b);
				_putchar(',');
				_putchar(' ');
			}
			else if (i >=  0 && i < 10)/* for 0-9 */
			{
				b = i % 10 + '0';
				_putchar(b);
				_putchar(',');
				_putchar(' ');
			}
			else /* for all 10+. or at least until 98. */
			{
				a = i / 10 + '0';
				b = i % 10 + '0';
				_putchar(a);
				_putchar(b);
				if (i != 98)
				{
					_putchar(',');
					_putchar(' ');
				}

			}

		}
	_putchar('\n');
	}
}
