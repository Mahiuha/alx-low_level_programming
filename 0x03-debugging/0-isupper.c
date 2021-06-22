#include "holberton.h"

/**
* _isupper - returns 1 if uppercase, 0 if not
* @c: an int given by the main function
*
* Description: Uses headers to link and a nested loops to achieve goal
* Return: see first line
*/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
