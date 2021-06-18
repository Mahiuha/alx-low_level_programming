#include <stdio.h>

/**
* main - Prints all numbers of base 10, without using type char
* Return: 0
**/

int main(void)
{
	int num;

	for (num = 48; num <= 57; num++)
	{
		putchar(num);
	}
	putchar('\n');

	return (0);
}
