#include "holberton.h"
/**
 * *_strncat - appends the src string to the dest string
 *
 * @dest: char to check
 * @src: char to check
 * @n: number of bytes from src
 * Description: This will append the src string to the dest string
 * Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int a, b, largosrc;

	for (a = 0; dest[a] != '\0'; a++)
	{
	}
	for (largosrc = 0; src[largosrc] != 0; largosrc++)
	{
	}
	for (b = 0; b < n && b < largosrc; b++, a++)
	{
		dest[a] = src[b];
	}
	return (dest);
}
