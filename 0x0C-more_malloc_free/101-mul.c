#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * isnum - checks for a digit.
 * @s: An ascii char to compare
 * Return: Always 0.
 */
int isnum(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
	}
	return (1);
}
/**
 * main - multiplies two large numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: Error or 0 if is correct
 */

int main(int argc, char **argv)
{

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	if (!isnum(argv[1]) && !isnum(argv[2]))
	{
		printf("Error\n");
		exit(98);
	}
	printf("%d\n", atoi(argv[2]) * atoi(argv[1]));
	return (0);
}

