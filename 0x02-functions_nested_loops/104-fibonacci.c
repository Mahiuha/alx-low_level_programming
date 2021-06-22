#include <stdio.h>
#define BILLION 1000000000

/**
* main - prints the first 98 fib numbers
* Description: cannot use any extra libraries or long long.
* Must use overflow methods
* Return: 0 if no error.
* A: The issue for this problem is we are not allowed to
* use long long or a GMP library. So we have to do integer
* overflow math to account for the huge 20+ digit number
* we will get. Those large numbers will be split 
* in half and stored in the left and right variables.
* B: Typical fib math.
* C: Do the math with longs until 90 because once the
* counter variable hits 93, I get an overflow and negatives.
* I could have done the loop till 91 or 92 or earlier.
* D: I split up the first 9 places of the number via
* dividing by my billion macro and modulo by a billion.
* The higher numbers are stored in the left and the 
* lower digits are in the right.
* E: The math that adds the two halves together, so it is
* like fib1 + fib2 = total or fib3. It is just the overflow we
* have to worry about, the one that might need to be carried.
* F: This is where I add the overflow into the left fib that I split up.
* G: I print the unsigned longs of both the left total and the right total

*/

int main(void)
{
	int i;
	unsigned long fib1 = 0, fib2 = 1, total = 0;
	unsigned long fibONE_left, fibONE_right;/* A */
	unsigned long fibTWO_left, fibTWO_right;
	unsigned long total_LEFT, total_RIGHT;

	fib1 = 1;/* B */
	fib2 = 2;
	total = fib1 + fib2;
	printf("%lu, ", fib1);
	printf("%lu, ", fib2);

	for (i = 3; i < 90; i++)
	{
		printf("%lu, ", total);/* C */
		fib1 = fib2;
		fib2 = total;
		total = fib1 + fib2;
	}

	fibTWO_left = fib2 / BILLION;/* D */
	fibTWO_right = fib2 % BILLION;
	total_LEFT = total / BILLION;
	total_RIGHT = total % BILLION;

	for (i = 90; i < 98; i++)
	{
		printf("%lu%lu, ", total_LEFT, total_RIGHT);/* E */
		fibONE_left = fibTWO_left;
		fibONE_right = fibTWO_right;
		fibTWO_left = total_LEFT;
		fibTWO_right = total_RIGHT;
		total_LEFT = (fibONE_left + fibTWO_left) +
			((fibONE_right + fibTWO_right) / BILLION);/* F */
		total_RIGHT = (fibONE_right + fibTWO_right) % BILLION;
	}
	printf("%lu%lu\n", total_LEFT, total_RIGHT);
	return (0);
}
