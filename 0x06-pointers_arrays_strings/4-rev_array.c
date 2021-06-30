#include "holberton.h"
/**
 * reverse_array - reverse the content of an array of intergers
 *
 * @a: pointer to int to check
 * @n: int to check
 * Return: 0 is success
 */
void reverse_array(int *a, int n)
{
	int x, y, z;

	for ((x = 0, y = n - 1); x < y; x++, y--)
	{
		z = a[x];
		a[x] = a[y];
		a[y] = z;

	}
}
