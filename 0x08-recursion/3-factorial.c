#include "holberton.h"
/**
 * factorial -  return the factorial of a given number
 *
 * @n: int to check
 *
 * Return: the factorial number of n
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
