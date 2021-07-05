#include "holberton.h"
/**
 * _strspn - get the length of a prefix substring
 *
 * @accept: pointer to get the bytes
 * @s: pointer to string char type
 *
 * Return: number of bytes in s which are from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int a;
	unsigned int b;

	for (a = 0; s[a]; a++)
	{
		for (b = 0; accept[b]; b++)
		{
			if (s[a] == accept[b])
				break;
		}
		if (!accept[b])
			break;
	}

	return (a);
}
