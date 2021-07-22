#include <stdarg.h>
#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * sum_them_all - A function that returns the sum of all its parameters
 * @n: Mandatory parameter
 *
 * Return: the sum, otherwise 0.
 */
int sum_them_all(const unsigned int n, ...)
{
va_list ap;
unsigned int i, nSum;

if (n == 0)
return (0);

va_start(ap, n);

nSum = 0;
for (i = 0; i < n; i++)
nSum += va_arg(ap, unsigned int);
va_end(ap);
return (nSum);
}

