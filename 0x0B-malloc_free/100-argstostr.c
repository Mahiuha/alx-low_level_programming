#include <stdlib.h>

int _strlen(char *s);
/**
 * argstostr - concatenates all arguments into one string
 * @ac: int args
 * @av: array of args
 *
 * Return: a pointer to a new string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	int i;
	int x;
	int y = 0;
	int len = 0;
	char *array;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
		len = len + _strlen(av[i]);

	len = len + 1 + ac;

	array = malloc(sizeof(char) * len);

	for (i = 0; i < ac; i++)
	{
		for (x = 0; av[i][x] != '\0'; x++, y++)
			array[y] = av[i][x];
		array[y] = '\n';
		x++;
	}
	array[y] = '\0';
	return (array);
}

/**
 * _strlen - Returns the length of a string
 * @s: The given string
 *
 * Return: The length of the string
 */
int _strlen(char *s)
{
	int total;

	for (total = 0; s[total] != '\0'; total++)
		;
	return (total);
}
