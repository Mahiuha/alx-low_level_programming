#include <stdlib.h>

/**
 * string_nconcat - function that concatenates two strings
 * @s1: input string 1
 * @s2: input string 2
 * @n: first n bytes
 * Return: char
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int i = 0;
	unsigned int i2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i] != '\0')
		i++;
	while (s2[i2] != '\0')
		i2++;
	i2++;
	if (n >= i2)
		n = i2;
	ptr = malloc(sizeof(*ptr) * n + (i + 1));
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{
		ptr[i] = s1[i];
		i++;
	}
	i2 = 0;
	while (s2[i2] != '\0' && i2 < n)
	{
		ptr[i] = s2[i2];
		i++;
		i2++;
	}
	ptr[i] = '\0';
	return (ptr);
}
