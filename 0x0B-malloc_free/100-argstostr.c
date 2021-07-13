#include <stdlib.h>
#include "holberton.h"
#include <stdio.h>

/**
* argstostr - a function that concatenates all the arguments
* @ac: the number of arguments
* @av: the values of the arguments
*
* Description: concatenates the arguments. returns null if any fail
* Return: the pointer. or null is errors
* A: if weird cases, return null
* B: we will coult how big the av 2d array is. go through it and count
* C: we add up the size of char, times the sum of, total count, ac, and 1
*	total count cause we want that many, ac for the number of new lines
*	that we need to print out, and a 1 for the null char
* D: this part is unneeded since the main uses free
* E: Start friom the very first argument of ac
* F: while we do not have a null character in the **av string
*	we make pointer at k index equal to av index index
*	we increase k because we need to keep track of our position
*	we increase J to move along the string until a null char
*	once we find a null char we will exit loop, assign a new line
*	increment the k, and go back in the loop until we hit the
*	very last ac counter.
* H: after er copied everything fromi the 2d over to the 1d pointer we made
*	now we will add a null char. and return
*/

char *argstostr(int ac, char **av)
{
	char *str;
	int arg, byte, index, size = ac;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (arg = 0; arg < ac; arg++)
	{
		for (byte = 0; av[arg][byte]; byte++)
			size++;
	}

	str = malloc(sizeof(char) * size + 1);

	if (str == NULL)
		return (NULL);

	index = 0;

	for (arg = 0; arg < ac; arg++)
	{
		for (byte = 0; av[arg][byte]; byte++)
			str[index++] = av[arg][byte];

		str[index++] = '\n';
	}

	str[size] = '\0';

	return (str);
}
