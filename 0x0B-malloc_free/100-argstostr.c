#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
  * argstostr - function that concatenates all the arguments of your program.
  * @ac: argument count
  * @av: argument 'strings'
  * Return: conct
  */

char *argstostr(int ac, char **av)
{
	char *conct;
	int i, ii, j = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (ii = 0; av[i][ii] != '\0'; ii++)
		{
			j++;
		}
	}
	conct = malloc(sizeof(char) * j + ac + 1);
	if (conct == NULL)
		return (NULL);

	j = 0;
	for (i = 0; i < ac; i++)
	{
		for (ii = 0; av[i][ii] != '\0'; ii++, j++)
		{
			conct[j] = av[i][ii];
		}
		conct[j] = '\n';
		j++;
	}
	return (conct);
}
