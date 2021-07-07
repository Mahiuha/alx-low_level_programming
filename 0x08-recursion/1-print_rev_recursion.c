#include "holberton.h"
/**
 * _print_rev_recursion - print a string in reverse
 *
 * @s: char to check
 *
 * Return: 0 is success
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
