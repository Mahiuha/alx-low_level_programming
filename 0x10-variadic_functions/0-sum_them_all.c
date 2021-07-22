#include "variadic_functions.h"
/**
 * sum_them_all - returns the sum of all its parameters
 *
 * @n: the constant unsigned integers that are the number of arguments
 *
 * Return: the sum of all the parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list valist;
	unsigned int runner;
	int total = 0;
	/* I created a variable type va_list that iterates the arguments */
	/* and a variable that runs the arguments */
	/* has to be unsigned int so I can compare it to n */
	if (n == 0)
		return (0);
	/* first condition of the task */
	/* start iterating the arguments with type va_list */
	/* first valist that hast type va_list followed by the first variable */
	va_start(valist, n);

	for (runner = 0; runner < n; runner++)
	{
		/* total is equal to the sum of the arguments */
		/* starting with the type va_list (valist) and */
		/* the type of the total number of arguments */
		total += va_arg(valist, int);
	}
	/* free a the variable type va_list (valist) */
	va_end(valist);
	/* return the total of the sum and must be an int */
	return (total);
}
