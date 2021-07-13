#include "holberton.h"
#include <stdlib.h>

/**
* _strdup - returns a pointer to newly allocated memory
* @str: a string given by main
*
* Description: the returned memory allocation has
*	a copy of the string and can be freed
* Return: the pointer or null if string is null
*/

char *_strdup(char *str)
{
	char *ptr;
	int i = 0;

	if (str == NULL)
		return (NULL);
	while (str[i])
		i++;
	ptr = malloc(sizeof(char) * i + 1);
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (str[i])
	{
		ptr[i] = str[i];
		i++;
	}
	ptr[i] = str[i];
	return (ptr);
}
