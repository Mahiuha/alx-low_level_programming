#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * argstostr - concatenates all the arguments of my last program
 *
 * @ac: number of arguments
 * @av: double pointer to a string
 *
 * Return: a pointer to the new string or Null if it fail
 */
char *argstostr(int ac, char **av)
{
	int av1 = 0, av2 = 0, size = 0, acc = 0;
	char *ptr;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (av2 = 0; av2 < ac; av2++)
	{
		for (av1 = 0; av[av2][av1] != '\0'; av1++)
		{
			size++;
		}
		size++;
	}
	size++;
	ptr = malloc(size * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	for (av2 = 0; av2 < ac; av2++)
	{
		for (av1 = 0; av[av2][av1] != '\0'; av1++)
		{
			ptr[acc] = av[av2][av1];
			acc++;
		}
		ptr[acc] = '\n';
		acc++;
	}
	ptr[acc] = '\0';
	return (ptr);
}
