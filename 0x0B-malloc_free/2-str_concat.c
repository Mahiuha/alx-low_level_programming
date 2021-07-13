#include "holberton.h"
#include <stdlib.h>

/**
* str_concat - a function that concatenates two strings
* @s1: the first string main gives us
* @s2: the second string main gives us
*
* Description: the returned memory allocation has
*	a copy of the added strings and can be freed
* Return: the pointer or null if string is null
*/

char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int i = 0;
	int j = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i])
		i++;
	while (s2[j])
		j++;
	ptr = malloc(1 + (sizeof(char) * i) + (sizeof(char) * j));
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		ptr[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		ptr[i] = s2[j];
		i++;
		j++;
	}
	ptr[i] = s2[j];
	return (ptr);
}
