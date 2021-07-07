#include "holberton.h"
/**
 * _puts_recursion - print a string
 * _putchar - prints the string
 * @s: char to check
 *
 * Return: 0 is success
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(*s);
		s++;
		_puts_recursion(s);
	}
}
