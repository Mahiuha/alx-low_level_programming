#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - function to cat all arguments of a program
 *
 * @ac: arg count
 * @av: arg vector
 * Return: pointer to new string or NULL if failed
 */

char *argstostr(int ac, char **av)
{
	int len, index, str;
	char *dest;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (len = 0, index = 0, str = 0; index < ac; index++)
	{
		while (av[index][str])
		{
			len++;
			str++;
		}
	}

	dest = malloc(len + ac + 1);

	if (dest == NULL)
		return (NULL);

	for (index = 0, len = 0; index < ac; index++)
	{
		for (str = 0; av[index][str]; str++)
		{
			dest[len] = av[index][str];
			len++;
		}
		dest[len] = '\n';
		len++;
	}
	dest[len] = '\0';
	return (dest);
}
