#include "variadic_functions.h"
#include <stdarg.h>
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
	unsigned int sum;
	int total;

	if (n == 0)
		return (0);
	va_start(valist, n);

	for (sum = 0; sum < n; sum++)
	{
		total += va_arg(valist, unsigned int);
	}
	va_end(valist);
	return (total);
}
