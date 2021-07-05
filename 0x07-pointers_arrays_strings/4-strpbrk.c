#include "holberton.h"
/**
 * _strpbrk - locates the first occurrence in s of any of the bytes of accept
 *
 * @accept: pointer to get the bytes
 * @s: string
 *
 * Return: a pointer to s or NULL if no byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int a;
	int b;

	for (a = 0; s[a]; a++)
	{
		for (b = 0; accept[b]; b++)
		{
			if (s[a] == accept[b])
				return (&(s[a]));
		}
	}
	return (0);
}
