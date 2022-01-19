#include "search_algos.h"

int binary_search(int *array, size_t size, int value);
int recurse_helper(int *array, size_t left, size_t right, int value);

/**
 * exponential_search - search array
 * @array: array to search
 * @size: size of array
 * @value: search value
 *
 * Return: index of matched value; -1 if not found
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t right = 1, left;

	if (array == NULL)
		return (-1);

	while (right < size && array[right] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", right, array[right]);
		right *= 2;
	}

	if (array[right] == value)
		return (right);

	left = right / 2; /* establish left bound */

	if (right >= size) /* if right is out of bounds */
		right = size - 1;

	printf("Value found between indexes [%lu] and [%lu]\n", left, right);

	return (recurse_helper(array, left, right, value));
}

/**
 * binary_search - search for value in array of sorted ints
 * @array: array to search
 * @size: size of array
 * @value: value to search
 *
 * Return: index of found value; or -1 if not found
 */
int binary_search(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);

	return (recurse_helper(array, 0, size - 1, value));
}

/**
 * recurse_helper - recursive implement of binary search
 * @array: array to search
 * @left: leftmost index
 * @right: rightmost index
 * @value: value to search
 *
 * Return: index of found value; or -1 if not found
 */
int recurse_helper(int *array, size_t left, size_t right, int value)
{
	size_t i = left, mid;

	if (left > right)
		return (-1);

	/* print search progress */
	printf("Searching in array: %d", array[i++]);
	while (i <= right)
		printf(", %d", array[i++]);
	printf("\n");

	/* calculate mid */
	mid = left + ((right - left) / 2);

	/* check if mid is value */
	if (array[mid] == value)
		return (mid);
	else if (array[mid] > value)
	{
		if (mid != 0)
			return (recurse_helper(array, left, mid - 1, value));
		else
			return (-1);
	}
	else
		return (recurse_helper(array, mid + 1, right, value));
}
