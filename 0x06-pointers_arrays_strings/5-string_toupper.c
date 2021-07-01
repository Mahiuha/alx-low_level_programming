#include "holberton.h"
/**
 * *string_toupper - changes all lowercase letters of a string to uppercase
 *
 * @p: pointer to char to check
 *
 * Return: 0 is success
 */
char *string_toupper(char *p)
{
	int a;

	for (a = 0; p[a] != '\0'; a++)
	{
		if (p[a] >= 97 && p[a] <= 122)
			p[a] -= 32;
	}
	return (p);
}
