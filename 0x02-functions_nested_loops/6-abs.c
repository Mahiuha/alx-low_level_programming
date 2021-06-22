#include "holberton.h"

/**
* _abs - computes the abs value
* @x: an int that takes in a number from main
*
* Description: Uses headers to link to another function and checcks stuff
* Return: int 0 when done and no errors
*/

int _abs(int x)
{
	if (x >= 0)
		return (x);
	else
		return (-x);
}
