#include "variadic_functions.h"
/**
 * print_numbers - prints numbers followed by a new line
 *
 * @separator: a pointer to a string to be printed between numbers
 * @n: number of integer passed to the function (4)
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	/* in this function print_numbers(", ", 4, 0, 98, -1024, 402); */
	/* 4 is not printed because isthe unsigned int passed to the function */
	/* meaning the total number of integers passed to the function */
	va_list valist;
	unsigned int runner;

	va_start(valist, n);

	for (runner = 0; runner < n; runner++)
	{
		/* print the numbers iterated for va_arg */
		printf("%d", va_arg(valist, int));
		if (runner != (n - 1) && separator)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(valist);
}
