#include "holberton.h"
/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: the given number
 * @index: index startin from 0 of the bit I want to set
 * Return: 1 if it worked, -1 if an error ocurred
 */
int set_bit(unsigned long int *n, unsigned int index)
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
		/* bitwise OR(|) only cero when both bits are 0*/
		/* as newvalue = 1; always 1*/
		*n |= newvalue;
		return (1);
}
