#include "holberton.h"

/**
* set_bit -sets the bit at a speciofic index
* @n: the pointer of the number we want to edit
* @index: the index position we want to change
*
* Description: use bit manipulation
* Return: 1 if wored or -1 if error
*/

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8)
		return (-1);
	*n |= 1UL << index;
	return (1);
}
