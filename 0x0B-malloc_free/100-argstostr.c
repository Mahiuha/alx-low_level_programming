#include "holberton.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all alrgumensts
 * @ac: argument counts
 * @av: argumanets to concatenate
 * Return: pointer to new string || NULL on fail
 */

char *argstostr(int ac, char **av)
{
	int size, idx, sum;
	int size1, idx1, sum1;
	char *concat;

	if (ac == 0)
	{
		return (NULL);
	}
	if (av == NULL)
	{
		return (NULL);
	}
	for (size = 0, sum = 0; av[size] != NULL; size++)
	{
		for (idx = 0; av[size][idx] != '\0'; idx++)
		{
			sum += 1;
		}
	}
	concat = malloc(sizeof(char) * (ac + (sum + 1)));
	if (concat == NULL)
	{
		return (NULL);
	}
	for (size1 = 0, sum1 = 0; av[size1] != NULL; size1++, sum1++)
	{
		for (idx1 = 0; av[size1][idx1] != '\0'; idx1++, sum1++)
		{
			concat[sum1] = av[size1][idx1];
		}
		concat[sum1] = '\n';
	}
	concat[sum1] = '\0';
	return (concat);
}
