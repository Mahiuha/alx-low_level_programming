#include "holberton.h"

/**
* _memset - a function that fills memory with a constant byte
* @s: a char pointer given by main
* @b: a constant byte
* @n: main tells how many bytes of memory the area pointed to
*
* Description: Function is very similar to memset from the stan lib
* Return: returns a pointer to the memory area s
*/

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	while (n > 0)
	{
		s[i] = b;
		i++;
		n--;
	}
	return (s);
}
