#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _calloc - allocates memory for an array using malloc
 *
 * @nmemb: number of elements we want to allocate a space in memory
 * @size: is the size in bytes of each of those elements
 *
 * Return: a pointer to newlly alocated memory or null if fail
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	/* unsigned int for 'a' to make the comparisson with size and nmemb */
	/* *ptr needs to be char because on the main the array is char type */
	unsigned int a;
	char *ptr;
	/* first the task condition */
	if (nmemb == 0 || size == 0)
		return (NULL);
	/* I already have the numbers of elements and the bytes size */
	/* so I dont use sizeof because we have size */
	/* multiply both variables and we have the necesary space to allocate */
	ptr = malloc(nmemb * size);
	/* check the allocation works and set the task condition */
	if (ptr == NULL)
		return (NULL);
	/* if I were using calloc it would set the pointer to 0 */
	/* but I must set the pointer to 0 using malloc */
	/* so we need 'a' that is the elements of the new pointer allocated */
	for (a = 0; a < nmemb * size; a++)
		/* set the pointer to 0 */
		ptr[a] = 0;
	return (ptr);
}
