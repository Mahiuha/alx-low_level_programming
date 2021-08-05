#include "holberton.h"

/**
* clear_bit - use the bitwise AND to clear the operator
* @n: the number given to us
* @index: the bit positiuon we want to switch
*
* Description: BITWISE TURN OFF
* Return: 1 if it works or -1 if error
*/


int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index  > sizeof(n) * 8)
		return (-1);
	*n &= ~(1UL << index);
	return (1);
}
