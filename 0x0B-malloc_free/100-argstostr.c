#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
int _strlen(char *s);
/**
 * argstostr - concatenate all arguments of your program with newline
 * @ac: argument count
 * @av: double pointer to array of strings passed to main
 * Return: Null if fail, else return pointer to new string
 **/

char *argstostr(int ac, char **av)
{
	char *s, *t;
	int x, y, total;

	if (ac == 0 || av == NULL)
		return (0);

	for (x = 0; x < ac; x++)
	{
		for (y = 0; av[x][y] != '\0'; y++, total++)
			;
		total++;
	}
	total++;

	s = malloc(total * sizeof(char));

	if (s == NULL)
		return (0);

	t = s;
	for (x = 0; x < ac; x++)
	{
		for (y = 0; av[x][y] != '\0'; y++)
		{
			*s = av[x][y];
			s++;
		}
		*s = '\n';
		s++;
	}
	return (t);
}
/**
 * _strlen - return length of a string
 * @s: char type
 * Return:  length of string
 **/
int _strlen(char *s)
{
	int a;

	for (a = 0; s[a] != '\0'; a++)
		;
	return (a);
}

