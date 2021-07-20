#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes of its own main function
 *
 * @argv: the argument that enters to the program
 * @argc: counts the number of arguments
 *
 * Return: the opcode hex number
 */
int main(int argc, char **argv)
{
	int runner = 0, bytes;
	/* the tasks tell us each opcode is two char long */
	/* if the argv is less or more then Error */

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	/* the argument in position one (the number the program receives) */
	/* will be equal to bytes */
	bytes = atoi(argv[1]);
	/* condition if the number of bytes y negative (less than cero) */
	/* exit status 2 and print Error */
	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	/* we use runner to go through the array we receive in the argv */
	while (runner < bytes)
	{
		/* is pre define how to print an opcodes */
		printf("%02hhx", *((char *)(main + runner)));
		if (bytes > runner + 1)
			printf(" ");
		runner++;
	}
	printf("\n");
	return (0);
}
