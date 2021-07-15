#include <stdlib.h>
/**
* size - Gets the size of a string.
* @str: String to evaluate.
* Return: Length of the given string.
*/
unsigned int size(char *str)
{
	unsigned int len = 0;

	while (*str++)
		len++;

	return (len);
}
/**
* string_nconcat - Concatenates two strings.
* @s1: First string.
* @s2: Second string.
* @n: Number of characters to copy from second string.
* Return: Pointer to new string, NULL on failure.
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int Ls1, Ls2, Lt;
	char *conc, *tmp;

	if (!s1)
		s1 = "";
	Ls1 = size(s1);

	if (!s2)
		s2 = "";
	Ls2 = size(s2);

	if (n >= Ls2)
		Lt = Ls1 + Ls2 + 1;
	else
		Lt = Ls1 + n + 1;

	conc = malloc(Lt);
	if (!conc)
		return (0);

	tmp = conc;
	Lt -= (Ls1 + 1);
	while (*s1)
		*tmp++ = *s1++;

	while (Lt--)
		*tmp++ = *s2++;

	*tmp = '\0';

	return (conc);
}
