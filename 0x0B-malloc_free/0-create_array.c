#include "holberton.h"
#include <stdlib.h>

/**
* create_array - creates an array of chars and initializes it
* @size: the size that main function sends us
* @c: the character we are sent.
*
* Description: use malloc and argc argv to achieve goal
*	returns null if size is zero. returns a
*	pointer to the array or NULL if it fails.
* Return: the pointer if successful, NULL if not
*/

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);
	ptr = malloc(size * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	while (i < size)
	{
		ptr[i] = c;
		i++;
	}
	return (ptr);
}
