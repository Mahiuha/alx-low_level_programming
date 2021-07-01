#include "holberton.h"

/**
* _strncat - appends the second string to the first
* @dest: a pointer given by the main function
* @src: a pointer given by the main function
* @n: an int given by main
*
* Description: Uses headers to link and pointers to achieve goal
* Return: returns the pointer s1 or dest.
* A: the number of bytes was bigger than the string so break
*/

char *_strncat(char *dest, char *src, int n)
{
	int counter;
	int counterSRC = 0;
	int i;
	int j = 0;

	while (dest[counter] != 0)
		counter++;
	while (src[counterSRC] != 0)
		counterSRC++;
	if (n >= counterSRC)
		for (i = counter; i < counter + counterSRC; i++, j++)
			dest[i] = src[j];/*copy the contents over*/
	else
		for (i = counter; i < counter + n; i++, j++)
			dest[i] = src[j];/* copies over limited amount*/
	return (dest);
}
