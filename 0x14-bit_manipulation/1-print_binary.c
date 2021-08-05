#include "holberton.h"
/**
 * num_to_binary - convert decimal to binary
 * @n: decimal to convert
 * Description: recursive function
 * Return: void
 */
void num_to_binary(unsigned long int n)
{
	if (n)
	{
		/* n is shifted by 1 bit */
		num_to_binary(n >> 1);
		_putchar((n & 1) + '0');
	}
}
/**
 * print_binary - prints the binary representation of a number
 * @n: unsigned long int to turn to binary
 * Return: void
 */
void print_binary(unsigned long int n)
{
	if (n)
	{
		num_to_binary(n);
	}
	else
		_putchar('0');
}
