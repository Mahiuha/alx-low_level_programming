#include "holberton.h"
/**
 * *leet - encodes a string into 1337
 *
 * @c: char to check
 *
 * Return: 0 is success
 */
char *leet(char *c)
{
	char a[] = "aeotlAEOTL";
	char b[] = {'4', '3', '0', '7', '1',
		    '4', '3', '0', '7', '1'};
	int x, y;

	for (x = 0; c[x] != '\0'; x++)
		for (y = 0; a[y] != '\0'; y++)
			if (c[x] == a[y])
				c[x] = b[y];
	return (c);
}
