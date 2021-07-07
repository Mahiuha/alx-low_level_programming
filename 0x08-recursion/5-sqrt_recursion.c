#include "holberton.h"
/**
 * _alcuadrado - give me the square root of a
 *
 * @n: the given number
 * @corre: from 0 up looking for square always less than the half of the number
 * Return: if does not have square or corre if it find it
 */
int _alcuadrado(int corre, int n)
{
	if (corre < 0)
		return (-1);
	if (corre == 1)
		return (1);
	if (n > corre / 2)
		return (-1);
	if (corre != n * n)
		return (_alcuadrado(corre, n + 1));
	if (corre == n * n)
		return (n);
	return (-1);
}
/**
 * _sqrt_recursion - return de square root of a natural number
 *
 * @n: to check
 *
 * Return: the square root or -1 if it does not have
 */

int _sqrt_recursion(int n)
{
	return (_alcuadrado(n, 0));
}
