#include "holberton.h"

/**
* _memcpy - a function that copies memory area
* @dest: a char pointer given by main
* @src: a char source from memory
* @n: main tells how many bytes of memory the area pointed to
*
* Description: Function is very similar to memset from the stan lib
* Return: returns a pointer to the memory area s
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;

	while (n > 0)
	{
		dest[i] = src[i];
		i++;
		n--;
	}
	return (dest);
}
