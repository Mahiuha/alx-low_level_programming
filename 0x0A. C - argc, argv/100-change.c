#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
* main - prints the minumin number of coins for perfect change
* @argc: number of arguments
* @argv: the vector that hold the arguments
*
* Description: using arc and argv to achieve the intended function
* Return: returns 0 if it works or something else if error
* A: if argc does not have only 2 arguments or if the
*	second argument is not a digit
* B: turn the whole number into an int, then subtract
*	25, 10, 5, 2, and 1. till no more. increase counter and return it
* C: checks if any non digits in the string.
*/

int main(int argc, char **argv)
{
	int number;
	int count = 0;

	if (argc != 2)/* A */
	{
		printf("Error\n");
		return (1);
	}
	number = atoi(argv[1]);
	while (number > 0)
	{
		while (number >= 25)
		{
			number -= 25;
			count++;
		}
		while (number >= 10)
		{
			number -= 10;
			count++;
		}
		while (number >= 5)
		{
			number -= 5;
			count++;
		}
		while (number >= 2)
		{
			number -= 2;
			count++;
		}
		while (number >= 1)
		{
			number -= 1;
			count++;
		}
	}
	printf("%d\n", count);
	return (0);
}
