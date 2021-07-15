#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string to concatenate
 * @s2: second string to concatenate
 * @n: max chars to get from s2
 * Return: new string concatenated.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *r;
	unsigned int i = 0, j = 0, size = 0;

	if (!s1)
		s1 = "";

	if (!s2)
		s2 = "";

	while (s1[i++])
		size++;
	while (s2[j++] && j <= n)
		size++;

	r = malloc(sizeof(char) * (size + 1));

	if (!r)
		return (0);

	for (i = 0; s1[i]; i++)
		r[i] = s1[i];

	for (j = 0; j < n && s2[j]; j++)
		r[j + i] = s2[j];

	r[j + i] = '\0';

	return (r);
}
