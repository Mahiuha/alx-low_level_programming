#include "holberton.h"

/**
* string_toupper - changes all lowercase to upper
* @s: a pointer i made that is passed by main
* Description: changes all lowercase to uppercase
* Return: returns the pointer;
*/

char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != 0)
	{
		if (s[i] >= 97 && s[i] <= 122)
			s[i] -= 32;
		i++;
	}
	return (s);
}
