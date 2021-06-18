
#include <stdio.h>

/**
* main - Prints alphabets in lowercase
* Return: 0
**/

int main(void)
{
	char l_letter;

	for (l_letter = 97; l_letter <= 122; l_letter++)
	{
		putchar(l_letter);
	}

	putchar('\n');

	return (0);
}
