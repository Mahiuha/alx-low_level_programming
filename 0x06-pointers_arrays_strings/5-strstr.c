#include "holberton.h"

/**
* _strstr - a function that locates a substring
* @haystack: a char pointer given by main
* @needle: a char pointer given by main
*
* Description: find the first occurance of the substring
*	returns the pointer to the beginning of the located substring
* Return: returns null if no match or the match if pattern matches
* A: initial two pointers that will be heystack and needle
* B: while the haystack, or i, is not null
* C: we make start equal to haystack and pattern to needle
*	we will reset them to these values each loop
* D: do the while loop if pattern is not null and
*	haystack value is equal to pattern
* E: we exit the loop when pattern is at the null char
*	or if there was no match. if we had a full match
*	we will be at the null character
* F: we increase keystack because we need to loop through again
*	this increment of haystack will be saved into start at the beginning
*/

char *_strstr(char *haystack, char *needle)
{
	char *start;/* A */
	char *pattern;

	while (*haystack)/* B */
	{
		start = haystack;/* C */
		pattern = needle;

		while (*pattern && *haystack == *pattern)/* D */
		{
			haystack++;
			pattern++;
		}
		if (*pattern == 0)/* E */
			return (start);
		haystack++;/* F */
	}
	return (0);/* G */
}
