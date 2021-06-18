#include <stdio.h>

/**
* main - Prints all numbers of base 16
* Return: 0
**/

int main(void)
{
	int num;
	char letter;

	for (num = 48; num <= 57; num++)
	{
		putchar(num);
	}

	for (letter = 'a'; letter <= 'f'; letter++)
	{
		putchar(letter);
	}

	putchar('\n');

	return (0);
}
