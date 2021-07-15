#include "holberton.h"
#include <stdlib.h>

/**
* string_nconcat - Concatenates two strings.
* @s1: The first string.
* @s2: The second string.
* @n: Unsigned int variable, like a limit.
*
* Return: To the value of pointer.
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int i, j, d, f;
char *e;
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		;
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
		;
	}
	if (j > n)
	{
		j = n;
	}
	e = malloc(sizeof(char) * (i + j + 1));
	if (e == NULL)
	{
		return (NULL);
	}
	for (d = 0; s1[d] != '\0'; d++)
	{
		e[d] = s1[d];
	}
	for (f = 0; f < j; f++)
	{
		e[d] = s2[f];
		d++;
	}
	e[i + j] = '\0';
return (e);
}
