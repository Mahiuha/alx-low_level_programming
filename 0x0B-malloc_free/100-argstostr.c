#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
int _strlen(char *ch);

/**
 * argstostr - concatenate arguments.
 * @ac: arg counter.
 * @av: arg vector.
 * Return: pointer p.
 */
char *argstostr(int ac, char **av)
{
int i, a = 0, k = 0;
int j;
char *p;
if (ac == 0 || av == NULL)
return (0);
for (i = 0; i < ac; i++)
{
a += _strlen(av[i]);
}
p = malloc(a + 1 + ac);
if (p == NULL)
return (0);
for (i = 0; i < ac; i++)
{
for (j = 0; j < (_strlen(av[i])); j++)
{
p[k] = av[i][j];
k++;
}
p[k] = '\n';
k++;
}
p[k] = '\0';
return (p);
}

/**
 * _strlen - counts number of chars.
 * @ch: string.
 * Return: pointer i.
 */

int _strlen(char *ch)
{
int i = 0;
while (ch[i])
i++;
return (i);
}
