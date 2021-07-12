#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
* main - adds numbers. checks if number
* @argc: number of arguments
* @argv: the vector that hold the arguments
*
* Description: using arc and argv to achieve the intended function
* Return: returns 0 if it works or something else if error
* A: if arg has no nunber inputs then print 0
* B: if arg has some inputs loop the code via while loop, decrement argc
* C: loop through the string of argv and check if anything not a digit
* D: If it is not a digit then enter the error statement
* E: add the atoi of the arg cause it passed the checks.
*/

int main(int argc, char **argv)
{
	int sum = 0;
	int i = 1;
	int j;

	if (argc == 1)/* A */
	{
		printf("0\n");
		return (0);
	}
	while (argc > 1)/* B */
	{
		j = 0;
		while (argv[i][j])/* C */
		{
			if (!isdigit(argv[i][j]))/* D */
			{
				printf("Error\n");
				return (1);
			}
			j++;
		}
		sum += atoi(argv[i]);/* E */
		i++;
		argc--;
	}
	printf("%i\n", sum);
	return (0);
}
