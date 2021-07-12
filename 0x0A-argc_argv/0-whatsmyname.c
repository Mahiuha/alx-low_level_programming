#include "holberton.h"
#include <stdio.h>

/**
* main - prints its name follwoed by a newline
* @argc: number of arguments
* @argv: the vector that hold the arguments
*
* Description: prints the current directory and the name like ./name
* Return: returns the name.
*/

int main(int argc, char **argv)
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
