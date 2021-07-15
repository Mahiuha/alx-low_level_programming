#include <stdlib.h>
#include "holberton.h"
int _strlen(char *s);
/**
 * string_nconcat - concats two strings
 * @s1: string 1
 * @s2: string 2
 * @n: the number of bytes from s2 to use
 *
 * Return: a pointer for the allocated memory for the new string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i, size1, size2, j;
	char *cat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

		size1 = _strlen(s1);
		if (n >= (unsigned int) _strlen(s2))
		size2 = _strlen(s2);
	else
		size2 = n;

		cat = malloc(sizeof(char) * (size1 + size2 + 1));

		if (cat == NULL)
			return (NULL);

	for (i = 0; i < size1; i++)
	{
		cat[i] = s1[i];
	}
	for (j = 0; j < size2; j++)
	{
		cat[i] = s2[j];
		i++;
	}
	cat[i] = '\0';

	return (cat);
}
/**
 * _strlen - Return the length of a string
 * @s: The string to check
 *
 * Return: The length of the string
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;

	return (i);
}

