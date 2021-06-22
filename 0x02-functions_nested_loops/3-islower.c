#include "holberton.h"

/**
* _islower - checks if the int c is lowercase
* @c: an int passed from the main file
*
* Description: Uses headers to link to another function and lowercase checker
* Return: int 0 when done and no errors
*/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
