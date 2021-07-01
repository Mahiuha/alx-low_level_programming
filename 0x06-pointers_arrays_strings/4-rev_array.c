#include "holberton.h"

/**
* reverse_array - reverses the content of an array of ints
* @a: an int pointer given my main
* @n: an int given by main
*
* Description: read first comment line
* Return: none. it is void.
*/


void reverse_array(int *a, int n)
{
	int temp;
	int i = 0;
	int end = n - 1;

	while (i < n / 2)
	{
		temp = a[i];
		a[i] = a[end];
		a[end] = temp;
		i++;
		end--;
	}
}

