#include "holberton.h"

/**
 * argstostr - cconcatena dos argumentos
 *
 * @ac: numero de argumentos
 * @av: doble puntero que apunta a una string
 *
 * Return: a pointer
 */
char *argstostr(int ac, char **av)
{
	int av1 = 0, av2 = 0, size = 0, acc = 0;
	char *s;

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
	s = malloc(size * sizeof(char));
	if (s == NULL)
		return (NULL);
	for (av2 = 0; av2 < ac; av2++)
	{
		for (av1 = 0; av[av2][av1] != '\0'; av1++)
		{
			s[acc] = av[av2][av1];
			acc++;
		}
		s[acc] = '\n';
		acc++;
	}
	s[acc] = '\0';
	return (s);
}
