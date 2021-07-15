#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * malloc_checked - allocate memory using malloc
 *
 * @b: show the size of the variable we need to allocate
 *
 * Return: normal process termination with a status value of 98
 */
void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
