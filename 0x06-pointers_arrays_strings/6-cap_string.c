#include "holberton.h"

/**
* cap_string- capitalizes all words
* @s: a pointer that main will give
*
* Description: cap all words after a space and period
* Return: returns the char pointer
* if the first char is not uppercase, than uppercase it
* then we go into a loop until null char
* we will check to see if we have a white space
* we then will increase I if white space is found
* if that car can be capitalized we capitalize it
* we exit the loop and iterate i. repeat the outer while loop
*/

char *cap_string(char *s)
{
	int i;

	if (s[0] >= 'a' && s[0] <= 'z')
		s[0] -= 32;
	while (s[i] != 0)
	{
		while (s[i] == '\t' || s[i] == '\n' || s[i] == ' ' ||
			s[i] == '.' || s[i] == ',' || s[i] == ';' ||
			s[i] == '!' || s[i] == '?' || s[i] == '"' ||
			s[i] == '(' || s[i] == ')' || s[i] == '{' ||
			s[i] == '}')
		{
			i++;
			if (s[i] >= 97 && s[i] <= 122)
				s[i] -= 32;
		}
		i++;
	}
	return (s);
}
