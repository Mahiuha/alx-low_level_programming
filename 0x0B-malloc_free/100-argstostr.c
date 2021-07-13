#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - concatenates all arguments into a string
 * @ac: number of arguments
 * @av: array containing arguments
 *
 * Return: pointer to new string of concatenated args
 * or NULL on failure (includes ac == 0, av == NULL)
 */

char *argstostr(int ac, char **av)
{
	int x, arg_len, i;
	char *str;

	i = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i <= ac; i++)
	{
		for (x = 0; av[i][x] != '\0'; x++)
			arg_len++;
		arg_len++; /* add space for null */
	}

	str = malloc(sizeof(char *) * (i + 1));

	if (str == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (x = 0; av[i][x] != '\0'; x++)
		{
			str[i] = av[i][x];
			i++;
		str[x] = '\n';
		x++;
	}
	str[x] = '\0';

	return (str);
}
