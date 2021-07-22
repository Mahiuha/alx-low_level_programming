#include "variadic_functions.h"
/**
 * print_strings - prints strings followed by a new line
 *
 * @separator: a pointer to the string to be printed between the strings
 * @n: the number of strings passed to the function
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int runner;
	va_list valist;
	char *string;

	va_start(valist, n);
	/* I run trough the string to know which are the words ill print */
	for (runner = 0; runner < n; runner++)
	{
		/* string is equal to the arguments in valist */
		/* string now represents the arguments while va_Arg iterates */
		string = va_arg(valist, char*);
		/* task condition */
		/* if one of the strings is NULL print (nil) */
		if (string == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", string);
		}
		if (runner + 1 < n && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(valist);
}
