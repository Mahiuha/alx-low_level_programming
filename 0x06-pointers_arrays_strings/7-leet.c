#include "holberton.h"

/**
* leet - a function that encodes a string into 1337
* @s: a pointer string given by main
*
* Description: changes 'let' to '137' o to 0
* Return: the char array
*/

char *leet(char *s)
{
	int i = 0;
	int j;
	int array[10][2] = {{97, 52},
	{65, 52},
	{101, 51},
	{69, 51},
	{108, 49},
	{76, 49},
	{111, 48},
	{79, 48},
	{116, 55},
	{84, 55}};/* AELOT */

	while (s[i] != 0)
	{
		for (j = 0 ; j < 10; j++)
		{
			if (s[i] == array[j][0])
				s[i] = array[j][1];
		}
		i++;
	}
	return (s);
}
