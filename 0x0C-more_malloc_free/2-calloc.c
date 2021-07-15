#include "holberton.h"
#include <stdlib.h>

/**
* makeitzero - helper function that assigns 0 to all
* @pointer: the ponter. it will increment its address position
* @product: the counter basically
*
* Description: loops through the void array and makes everyhting 0
*	the array was void but it was casted and passed in as a char
* Return: nothing it is void
*/

void makeitzero(char *pointer, int product)
{
	if (product)
	{
		*pointer = 0;
		makeitzero(pointer + 1, product - 1);
	}
}

/**
* _calloc - a function that allocates memory for an array using malloc
* @nmemb: how many elements
* @size:the sizeof data type
*
* Description: allocates memory and behaves like the calloc function
*	make our own bootleg version. makes array of nmemb elements
*	of byte size size. and returns that pointer. set memory to 0
* Return: a pointer or null if errors
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *pointer;
	int product;

	product = nmemb * size;
	if (size <= 0 || nmemb <= 0)
		return (NULL);
	pointer = malloc(product);
	if (pointer == NULL)
		return (NULL);
	makeitzero(pointer, product);
	return (pointer);
}
