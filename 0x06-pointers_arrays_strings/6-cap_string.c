#include "holberton.h"
/**
 * *cap_string - capitalizes all words of a string
 *
 * @a: int to check
 *
 * Return: 0 is success
 */
char *cap_string(char *a)
{
	int x;

	for (x = 0; a[x] != '\0'; x++)
	{
		if (x == 0)
		{
		if (a[x] >= 'a' && a[x] <= 'z')
		{
			a[x] = a[x] - 32;
		}
		}
		if (a[x] == ' ' || a[x] == '\n' || a[x] == ','
		    || a[x] == '\t' || a[x] == ';' || a[x] == '.'
		    || a[x] == '!' || a[x] == '?'
		    || a[x] == '"' || a[x] == '(' || a[x] == ')'
		    || a[x] == '{' || a[x] == '}')
		{
			if (a[x + 1] >= 'a' && a[x + 1] <= 'z')
			{
				a[x + 1] = a[x + 1] - 32;
			}
		}
	}
		return (a);
}
