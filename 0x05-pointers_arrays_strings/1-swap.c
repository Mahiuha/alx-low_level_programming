#include "holberton.h"
/**
 * swap_int - swaps the values of two integers
 *
 * @a: int to check
 * @b: second int to check
 *
 * Return: 0 is success
 */
void swap_int(int *a, int *b)
{
	int s;

	s = *a;
	*a = *b;
	*b = s;
}
