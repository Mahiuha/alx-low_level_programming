#include "holberton.h"

/**
* _strcmp - compares two strings
* @s1: a pointer given by the main function
* @s2: a pointer given by the main function
*
* Description: Uses headers to link and pointers to achieve goal
* Return: returns 0 if strings match and no errors
* I found the answers on the man page
* A: got rid of my counter. did not need it.
* B: do the loop only if s1 is not the null character
*	or if s2 is nit the null
* C: if a difference in values is encountered, do the code
*	so we will get the difference and return
*/

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != 0 && s2[i] != 0)/* B */
	{
		if (s1[i] != s2[i])/* C */
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
