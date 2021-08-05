#include "holberton.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: a pointer to s tring of 0 and 1 chars
 * Return: the converted number, or 0 if b is NULL
 * or 0 if there's more chars in the string b different from 0 and 1
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int k = 1;
	unsigned int i = 0;
	int c;
	unsigned int len;
	unsigned int runner;

	if (b == NULL)
		return (0);
	runner = 0;
	while (b[runner] != '\0')
	{
		runner++;
	}
	len = runner;

	for (c = len - 1; c >= 0; c--)
	{
		if (b[c] != '0' && b[c] != '1')
			return (0);
		if (b[c] == '1')
		{
			i += k;
		}
		k *= 2;
	}
	return (i);
}
