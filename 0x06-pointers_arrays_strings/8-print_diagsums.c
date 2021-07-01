#include "holberton.h"
#include <stdio.h>

/**
* print_diagsums - write a function that prints the sum of the two
*	diagonals  of a square matrix
* @a: an int array passed by main
* @size: the size of the array passed by main
*
* Description: prints out the X sum basically
* Return: it is void. no return.
*/

void print_diagsums(int *a, int size)
{
	int i;
	int j;
	int sum = 0;
	int sum2 = 0;

	for (i = 0 ; i < size; i++)
		for (j = 0; j < size; j++)
		{
			if (i == j)
				sum += *(a + (i * size) + j);
			if (i + j == size - 1)
				sum2 += *(a + (i * size) + j);
		}
	printf("%d, %d\n", sum, sum2);
}
