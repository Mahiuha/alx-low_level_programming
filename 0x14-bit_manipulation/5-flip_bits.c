#include "holberton.h"

/**
* flip_bits - counts the number of differences between bits
* @n: the first number
* @m: the second number
*
* Description: counts the nimber of differences between 2 numbers
* Return: the number of differences
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int l = n ^ m;
	int count = 0;

	while (l != 0)
	{
		l = l & (l - 1);
		count++;
	}
	return (count);
}
