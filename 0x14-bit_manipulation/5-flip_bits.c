#include "holberton.h"
/**
 * flip_bits - tells the number of bits to flip to
 * get from one number to another
 * @n: the first given number
 * @m: the number to flip
 * Return: an unsigned int (numebr of bits)
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	/* loop until both of them become zero */
	while (n || m)
	{
		/* last bits in n and m */
		if (((n & 1) ^ (m & 1)) == 1)
			count++;
		/* right shift both integers by 1 */
		n >>= 1;
		m >>= 1;
	}
	return (count);
}
