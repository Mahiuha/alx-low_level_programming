#include "holberton.h"
#include <stdlib.h>

/**
* string_nconcat - a function that concats two strings
* @s1: a string given by main
* @s2: a string given by main
* @n: the length given by main.
*
* Description: return a pointer that points to new space in memory
*	which contains s1 and the first n bytes of s2 and a null term
*	if n is >= s2 then print it all
* Return: the pointer to the allocated memory
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *pointer;
	unsigned int i = 0;
	unsigned int j = 0;
	unsigned int k = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i])
		i++;
	while (s2[j])
		j++;
	if (n >= j)
		pointer = malloc((i + j + 2) * sizeof(char));
	if (n < j)
		pointer = malloc((i + n + 1) * sizeof(char));
	if (pointer == NULL)
		return (NULL);
	if (n >= j)
	{
		i = 0;
		while (s1[i])
		{
			pointer[k] = s1[i];
			i++;
			k++;
		}
		j = 0;
		while (s2[j])
		{
			pointer[k] = s2[j];
			j++;
			k++;
		}
		pointer[k] = '\0';
	}
	else
	{
		i = 0;
		while (s1[i])
		{
			pointer[k] = s1[i];
			i++;
			k++;
		}
		j = 0;
		while (n)
		{
			pointer[k] = s2[j];
			n--;
			j++;
			k++;
		}
		pointer[k] = '\0';
	}
	return (pointer);
}
