#include <stdlib.h>
/**
*argstostr - concatenates all the arguments of a program with "\n"
*@ac: length of av
*@av: array of strings
*Return: strings
*/
char *argstostr(int ac, char **av)
{
	int i, j, k = 0, size;
	char *ch;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			size++;
		size++;
	}
	size++;
	ch = malloc(sizeof(char) * size);
	if (ch == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			ch[k] = av[i][j];
			k++;
		}
		ch[k] = '\n';
		k++;
	}
	ch[k] = '\0';
	return (ch);
}
