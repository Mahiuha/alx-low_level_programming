#include "holberton.h"
#include <stdlib.h>

/**
 * _calloc - prints buffer in hexa
 * @nmemb: the address of memory to print
 * @size: the size of the memory to print
 * Return: Nothing.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (size == 0 || nmemb == 0)
	{
		return (NULL);
	}
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	if (ptr == NULL)
		return (NULL);
	_memset(ptr, 0, nmemb * size);
	return (ptr);
}
#include "holberton.h"

/**
 * *_memset - check the code for Holberton School students.
 * @s: Starting address of memory to be filled.
 * @b: Value to be filled.
 * @n: Number of bytes to be filled starting from ptr to be filled.
 * Return: Char.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int idx = 0;
	char *a = s;

	while (idx < n)
	{
		a[idx] = b;
		idx++;
	}
	return (a);
}

