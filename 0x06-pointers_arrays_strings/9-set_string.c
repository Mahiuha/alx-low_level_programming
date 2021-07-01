#include "holberton.h"
#include <stdio.h>

/**
* set_string - sets the value of a pointer to a char
* @s: a pointer to a pointer given by main
* @to: a char string
*
* Description: pointers to pointer bruh. we want to copy
*	s over to to
* Return: none its void.
*/

void set_string(char **s, char *to)
{
		*s = to;
}
