#include "holberton.h"
/**
 * _esprimo - shows me when a number is prime
 *
 * @n: int to check
 * @corre: int to check
 *
 * Return: 0 if is not a prime
 */
int _esprimo(int n, int corre)
{
	if (n < 2)
		return (0);
	if (n == 2)
		return (1);
	if (corre >= n / 2)
		return (1);
	if (n % corre == 0)
		return (0);
	else
		return (_esprimo(n, corre + 1));
	return (1);
}

/**
 * is_prime_number - function return 1 if is prime number
 *
 * @n: to check
 *
 * Return: 0 if is not prime number
 */
int is_prime_number(int n)
{
return (_esprimo(n, 2));
}
