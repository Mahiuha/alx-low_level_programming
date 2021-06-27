#include "holberton.h"
#include <stdio.h>

/**
* _isdigit - returns 1 if digit, 0 if not
* @c: an int given by the main function
*
* Description: Uses headers to link and a nested loops to achieve goal
* Return: see first line
*/

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
