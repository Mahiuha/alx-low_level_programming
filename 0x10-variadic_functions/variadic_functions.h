#ifndef _VARIADIC_FUNCTIONS_H
#define _VARIADIC_FUNCTIONS_H
#include <stdarg.h>
#include <stdio.h>

void printchar(va_list charlist);
void printinteger(va_list charlist);
void printfloat(va_list charlist);
void printstring(va_list charlist);

typedef struct characters
{
        /* pointer to the arguments passed to the function print_all) */
        char *arguments;
        /* pointer to function print_all that returns nothing */
        /* and receive a list of characters(arguments) */
	/* va_list is a type that iterates arguments */
	/* va_list as type of  variable we're going to name charlist */
	/* so the pointer points a function that receive va_list) */
        void (*ptrfunc)(va_list);
} characters;


int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
