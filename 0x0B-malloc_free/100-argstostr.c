#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * argstostr - concatenates all of the arguments of the program
 * @ac: count of arguments given to program
 * @av: values fed into program
 * Return: concatenated string
 */
char *argstostr(int ac, char **av)
{
	int i, j, k = 0, n = 0;
	char *s = NULL;

	if ((ac == 0) || (av == NULL))
		return (NULL);

	for (i = 0; i < ac; i++)
		for (j = 0; av[i][j]; j++)
		{
			n++;
		}

	s = (char *)malloc((n + ac + 1) * sizeof(char));
	if (s == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			s[k++] = av[i][j];
		s[k++] = '\n';
	}
	s[k] = '\0';

	return (s);
}
