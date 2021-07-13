
#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 **argstostr -  a function that concatenates all the arguments of your program.
 *@ac : int
 *@av : array
 *Return: array
 */
char *argstostr(int ac, char **av)
{
	int x, y, i, j, l = 0, a = 0;
	char *s;

	if (ac == 0 || av == NULL)
	return (NULL);
	for (i = 0; (i < ac); i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		l++;
		l++;
	}

	s = malloc(sizeof(char) * l + 1);
	if (s == NULL)
	return (NULL);
	for (x = 0; x < ac ; x++)
	{
		for (y = 0; av[x][y] != '\0'; y++)
		{
			s[a] = av[x][y];
			a++;
		}
		s[a++] = '\n';
	}
	s[a] = '\0';
	return (s);
}
