#include "holberton.h"
/**
 * _strchr - locates a character in a string
 *
 * @s: char to check
 * @c: char to check
 *
 * Return: s if is found and null if is not
 */
char *_strchr(char *s, char c)
{
	unsigned int x;

	for (;; x++)
	{
		if (s[x] == c)
			return (&(s[x]));
		{
			if (s[x] == '\0')
				return (0);
		}
	}
}
