#include <stdio.h>
#include "3-calc.h"
/**
 * op_add - sum to variables
 *
 * @a: int to sum
 * @b: int to sum
 *
 * Return: sum of ints
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - substracts a from b
 *
 * @a: int to check
 * @b: to substract
 *
 * Return: difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiplicates a and b
 *
 * @a: first number
 * @b: second number
 *
 * Return: product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - divides two numbers
 *
 * @a: number to be divided
 * @b: number will divide
 *
 * Return: result of a division
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - remainder of a division
 *
 * @a: first number
 * @b: second number
 *
 * Return: a remaindes of the division
 */
int op_mod(int a, int b)
{
	return (a % b);
}
