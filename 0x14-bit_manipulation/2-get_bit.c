#include "holberton.h"
/**
 * get_bit - get the value of a bit at a given index
 * @n: the given number
 * @index: index startin from 0 of the bit I want to get
 * Return: the value of the bit at index or -1 if failed
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int size;
	/* 8 = unsigned long int size */
	size = (sizeof(n) * 8);
	/* function fails when index is greater than n size */
	if (index > size)
		return (-1);
	/* binary's positions goes from right to left */
	/* so index starts decrementing */
	/* e.g. index = 1 n = 98*/
	/* 98 in binary 1100010 */
	/* size of that binary (from 0 ) is equal to 6 */
	/* 1(6) 1(5) 0(4) 0(3) 0(2) 1(1) 0(0) */
	/* so index decrementing and n shifted to right */
	/* when index finds 1, position 1 = 1bit */
	while (index--)
		/* n is shifted to the right by one bit */
		n >>= 1;
	return (n & 1);
}
