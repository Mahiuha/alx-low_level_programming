#include <stdio.h>

/**
* main - fizz bizz holterton style
* Description: Uses headers to link and a nested loops to achieve goal
* fizz buzz from 1-100. print fizz for multiples of 3 and buzz for
* multiples of 5 and fizzbuzz for multiples of both eg. 15
* could use a switch for neater and better code
* Return: 0 if no errors
*/

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%d", i);
		if (i != 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
