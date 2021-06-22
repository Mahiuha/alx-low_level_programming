#include <stdio.h>

/**
* main - prints the first 50 fib numbers
* Description: prints the fub numbers up to the 50th with new lines
* Return: 0 if no error.
* A: Typical fib algo. Here I wrote total = fib1 + fib2.
* Other ways people have written this is c = a + b,
* next = current + previous, etc. Each value shifts over to the
* next so eg. if I had 8 = 5 + 3 (total = fib1 + fib2), we shift
* it all to the right and drop the right most. So now
* fib2 is now fib1 (the 3 is now the 5),
* fib1 is now total (the 5 is now an 8), and the total needs updating.
* Now it is 13 = 8 + 5. See the shift in positions?
* B: So I print out total but I exclude the last one because
* I do not want the punctuation in there and I 
* also outputted 1, 1, 2, 3, 5 due to starting
* at 0 and 1 so I skipped printing one twice.
* C: This is here too because I had to skip over the 1 printing twice.
* D: This prints the last one without punctuation
* Tips I saw: I can do the punctuations before the code
* and just do a specific case for the first number.
* This would cut down the code.
*/

int main(void)
{
	long i, total, fib1, fib2;

	i = 1;
	fib1 = 0;
	fib2 = 1;
	while (i <= 51)
	{
		total = fib1 + fib2;/* A */
		fib2 = fib1;
		fib1 = total;
		if (i != 51  && i != 1)/* B */
			printf("%ld, ", total);
		else if (i == 1)/* C */
			;
		else/* D */
			printf("%ld", total);
		i++;
	}
	printf("\n");
	return (0);
}
