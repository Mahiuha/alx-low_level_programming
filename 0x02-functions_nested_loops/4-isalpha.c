#include "holberton.h"

/**
* _isalpha - checks if the int c is a letter
* @c: an int that is passed from the main file
*
* Description: Uses headers to link to another function and letter checker
* Return: int 0 when done and no errors
*/

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c <= 90 && c >= 65))
		return (1);
	else
		return (0);
}
