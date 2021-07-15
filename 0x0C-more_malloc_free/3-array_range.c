#include "holberton.h"
#include <stdlib.h>

/**
* array_range - a function that creates an array of integers
* @min: the min value
* @max: the max value
*
* Description: create an array with the ranges frm min to max
* Return: the pointer to the array
*/
int *array_range(int min, int max)
{
	int i;
	int range = max - min + 1;
	int *pointer;

	if (min > max)
		return (NULL);
	pointer = malloc(range * sizeof(int));
	if (pointer == NULL)
		return (NULL);
	for (i = 0 ; range > 0; range--, i++, min++)
		pointer[i] = min;
	return (pointer);
}
