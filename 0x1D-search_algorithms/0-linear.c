#include "search_algos.h"

/**
* linear_search - searches for a value in an array of ints
* @array: an array we are given
* @size: a size of the array
* @value: the numebr we are searching
*
* Return: -1 if not found or the index of found
*/

int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (!array || size == 0)
		return (-1);

	while (i < size)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
		i++;
	}
	return (-1);
}
