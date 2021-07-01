#include "holberton.h"

/**
* _strncpy - copies a string like the strncpy function
* @dest: a pointer given by the main function
* @src: a pointer given by the main function
* @n: an int given by main
*
* Description: Uses headers to link and pointers to achieve goal
* Return: returns the pointer s1 or dest.
* I found the answers on the man page
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != 0; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = 0;
	return (dest);
}
