#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - function that concatenates all the arguments of your program
 * @ac: argument count
 * @av: argument vector
 * Return: 0
 */
char *argstostr(int ac, char **av)
{
	char *ptr, *beginning;
	int i, len = 0, j;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		len += 1 + _strlen(av[i]);
	}
	ptr = malloc(sizeof(char) * (len + 1));
	beginning = ptr;
	if (ptr == NULL)
	{
		return (NULL);
	}
	if (ptr)
	{
		for (i = 0; i < ac; i++)
		{
			for (j = 0; av[i][j]; j++)
			{
				*ptr++ = av[i][j];
			}
			*ptr++ = '\n';
		}
		ptr = '\0';
	}
	return (beginning);
}
/**
 * _strlen - returns string length
 * @s: string
 * Return: strlen
*/
int _strlen(char *s)
{
	int string;

	for (string = 0; string[s] != '\0'; string++)
	{
		;
	}
	return (string);
}
