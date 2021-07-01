#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    char s1[] = "hello";
    char s2[] = "world!";
	
char s3[] = "hello";
    char s4[] = "horld!";
char s5[] = "wello";
    char s6[] = "aorld!";
    printf("%d\n", _strcmp(s1, s2));
    printf("%d\n", _strcmp(s2, s1));
    printf("%d\n", _strcmp(s1, s1));
printf("%d\n", _strcmp(s3, s4));
printf("%d\n", _strcmp(s5, s6));
    return (0);
}
