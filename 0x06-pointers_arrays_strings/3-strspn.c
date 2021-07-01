#include "holberton.h"

/**
* _strspn- function that gets the length of a prefix substring
* @s: a pointer given by main
* @accept: the char to look for and get the length as
*
* Description: should be closely similar to strspn
* Return: returns the bytes where accept is in *s
*/

unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	int matches = 0;

	for (i = 0; s[i] != 0; i++)
	{
		if (matches != i)
			break;
		for (j = 0; s[j] != 0; j++)
		{
			if (s[i] == accept[j])
			{
				matches++;
				break;
			}
		}
	}
	return (matches);
}
