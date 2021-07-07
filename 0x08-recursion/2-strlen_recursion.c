#include "holberton.h"
/**
 * _strlen_recursion - returns the length of a string
 *
 * @s: pointer to a char to check
 *
 * Return: 0 is success
 */
int _strlen_recursion(char *s)
{
	int c;

	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		c = _strlen_recursion(s + 1);
	}
	return (c + 1);
}
