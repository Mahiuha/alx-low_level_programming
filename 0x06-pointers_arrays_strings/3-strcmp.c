#include "holberton.h"
/**
 * _strcmp - compares two strings
 *
 * @s1: char to check
 * @s2: char to check
 * Return: 0 is success
 */
int _strcmp(char *s1, char *s2)
{
	while ((*s1 != '\0' && *s2 != '\0') && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	if (*s1 == *s2)
	{
		return (0);
	}
	else
	{
		return (*s1 - *s2);
	}
}
