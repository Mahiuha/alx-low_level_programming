#include "holberton.h"

/**
* _strcat - appends the second string to the first
* @dest: a pointer given by the main function
* @src: a pointer given by the main function
*
* Description: Uses headers to link and pointers to achieve goal
* Return: returns the pointer s1 or dest.
*/

char *_strcat(char *dest, char *src)
{
	int counter;
	int counterSRC = 0;
	int i;
	int j = 0;

	while (dest[counter] != 0)
		counter++;
	while (src[counterSRC] != 0)
		counterSRC++;

	for (i = counter; i < counter + counterSRC; i++, j++)
		dest[i] = src[j];
	return (dest);
}
