#include "holberton.h"
/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: the given number
 * @index: index startin from 0 of the bit I want to set
 * Return: 1 if it worked, -1 if an error ocurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int size;
	unsigned long int newvalue = 1;
	/* 8 = unsigned long int size */
	size = (sizeof(*n) * 8);
	/* function fails when index is greater than n size */
	if (index > size)
		return (-1);
	/* newvalue runs from the left the index positions */
	/* and add the value of newvalue that is 1 */
	newvalue <<= index;
	/* so *n is n & (NOT 1 than means 0) */
	/* e.g n = 98 binary = 1100010 */
	/* n=1100010 & newvalue=1 */
	/* index = 1, n= 1100010 so in position 1 goes the newvalue 1 */
	   /* bitwise NOT, resullt is 0 when bit is 1 and 1 when bit is0 */
	/* with ~ so 1 is now cero */
	/* instead n = 1100010 with ~ n= 1100000 that in decimal is 96 */
	*n &= (~newvalue);
	return (1);
}
