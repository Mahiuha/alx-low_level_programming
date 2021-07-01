#include "holberton.h"
#include <stdio.h>

/**
* printit - a helper function
* @c: a character to see fi it is printable
*
* Description: checks the character
* Return: a 1 or 0 for true or false
*/
int printit(char c)
{
	if ((c < 32 && c >= 0) || c > 126)
		return (0);
	return (1);
}

/**
* print_buffer - a function that prints a buffer
* @b: a char pointer given by main that represents a string
* @size: a size of bytes given by main
*
* Description: lots of formatting and stuff to do in this one
* Return: is void
*/

void print_buffer(char *b, int size)
{
	int s1 = size;
	int s2 = size;
	char *ptr1 = b;
	char *ptr2 = b;
	int i = 0;
	int j = 0;
	int k = 0;

	if (size <= 0)
		printf("\n");
	while (size > 0)
	{
		size -= 10;
		printf("%08x: ", 10 * k);
		k++;
		for (i = 0; i < 5; i++)
		{
			for (j = 0; j < 2; j++)
			{
				if (s1 == 0)
					printf("  ");
				if (s1 > 0)
				{
					printf("%02x", *ptr1);
					s1--;
					ptr1++;
				}
			}
				putchar(' ');
		}
		for (i = 0; i < 10; i++)
		{
			if (s2 > 0)
			{
				if (printit(*ptr2))
					printf("%c", *ptr2);
				else
					putchar('.');
				s2--;
				ptr2++;
			}
		}
	printf("\n");
	}
}
