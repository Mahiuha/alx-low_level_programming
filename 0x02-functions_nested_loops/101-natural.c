#include <stdlib.h>
#include <stdio.h>

/**
* main - prints fizz bizz type of stuff.
* Description : add up the sums of multiples of 3 and 5 till 1024
* Return: 0 if no error.
* A: While loop, starts at 0. Do the code until i is less 
* than the num, given to us by the problem (1024).
* B: If and else if are like one or the other commands.
* I could have used an if (i % 3 == 0 || i % 5 == 0)
* to put both checks into one line but this was my initial code
* and I don’t want to change it because I want to see
* my coding progress. So back to B, it checks if it is divisible
* by 3 or 5 and if so then we increment sum by i.
* C: We increase i and that drives us through the loop,
* we print the total in the end.
*/
int main(void)
{
	int i, total = 0;

	while (i < 1024)/* A */
	{
		if ((i % 3) == 0)/* B */
			total += i;
		else if ((i % 5) == 0)
			total += i;
		i++;/* C */
	}
	printf("%i\n", total);
	return (0);
}
