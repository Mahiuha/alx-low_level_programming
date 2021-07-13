#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strlen - Get the length of an string
 * @s: string
 * Return: length of s
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != 00; i++)
	{
	}
	return (i);
}
/**
 * argstostr - this funcion will concatenates all the arguments
 * @ac: number of arguments
 * @av: the arguments
 * Return: contatenated arguments
 */
char *argstostr(int ac, char **av)
{
	char *ptr;
	int var, c, j, k;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (c = 0; c < ac; c++)
	{
		var = var + _strlen(av[c]);
	}

	ptr = malloc((var + ac + 1) * sizeof(char));
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}

	var = 0;

	for (j = 0; j < ac; j++)
	{
		for (k = 0; av[j][k] != '\0'; k++)
		{
			ptr[var] = av[j][k];
			var++;
		}

		ptr[var] = '\n';
		var++;
	}
	return (ptr);
}
