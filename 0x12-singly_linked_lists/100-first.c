#include "lists.h"
/**
 * mystartupfunction - prints a string before the main function is executed
 *
 * Return: void
 */
void __attribute__ ((constructor)) mystartupfunction(void)
{
	/* Apply the constructor attribute to myStartupFun() so that */
	/*  is executed before main() */

	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
