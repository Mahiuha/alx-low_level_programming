#include "holberton.h"
#include <stdlib.h>




/**
  * len - get length of string
  * @s: str
  * Return : int
  */

int len(char *s)
{
	int c;
	for (c = 0; s[c] != '\0'; c++)
	;
	return (c);
}

/**
  * string_nconcat - concatenates two strings
  * @s1: string
  * @s2: string
  * @n: unsigned int
  */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *array;
	unsigned int i = 0;
	unsigned int i_s2;
	unsigned size_s2 = len(s2);
	unsigned size = len(s1) + len(s2);
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	array = malloc(sizeof(char) * (size + 1));
	
	/* check for allocation failure */
	if (array == NULL)
		return (NULL);
	
	for ( ; *s1 != '\0'; s1++)
	{
		array[i] = *s1;
		i++;
	}
	if (n >= size_s2)
	{
		for ( ; *s2 != '\0'; s2++)
		{
			array[i] = *s2;
			i++;
		}
	}
	for (i_s2 = 0; i_s2 < n; i_s2++)
	{
		if (i_s2 >= size_s2)
			break;
		array[i] = *s2;
		s2++;
		i++;
	}
	array[i] = '\0';
	return (array);
}
