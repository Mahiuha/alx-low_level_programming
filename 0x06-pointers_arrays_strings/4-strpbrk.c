#include "holberton.h"

/**
* _strpbrk - a function that searches a string for any set of bytes
* @s: a pointer what will be given by main. returned by s
* @accept: a string given by main
*
* Description: returns a pointer to the byte in s that matches
*	one of the bytes in accept or null if no such byte
* Return: a pointer to s
*/

char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;

	for (i = 0; s[i] != 0; i++)
	{
		for (j = 0; accept[j] != 0; j++)
			if (s[i] == accept[j])
				return (s + i);
	}
	return (0);
}
