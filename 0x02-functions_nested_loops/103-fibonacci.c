#include <stdio.h>

/**
* main - prints the sum of fib numbers
* Description: cannot past 4 million. evens only
* Return: 0 if no error.
* A: While the fib is less than 4 million. This is the prompt. 
* B: If the fib is divisable by 2, it is even, add it to sum.
* C: Typical fib format, c = a + b, b = a, a = c, c = a + b repeat.
*/

int main(void)
{
	long fib1 = 1, fib2 = 1, total = 0, summed = 0;

	while (total < 4000000)/* A */
	{
		if ((total % 2) == 0)/* B */
			summed += total;
		total = fib1 + fib2;/* C */
		fib2 = fib1;
		fib1 = total;
	}
	printf("%ld\n", summed);
	return (0);
}
