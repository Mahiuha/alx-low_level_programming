#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s = "hello";
    char *f;

    f = _strchr(s, 'l');
    printf("%s\n", f);
 printf("%p\n", f);
     f = _strchr(s, 'o');
    printf("%s\n", f);
 printf("%p\n", f);
 f = _strchr(s, 'z');
    printf("%s\n", f);
 printf("%p\n", f);
 f = _strchr(s, '\0');
    printf("%s\n", f);
 printf("%p\n", f);
 f = _strchr(s, 'a');
    printf("%s\n", f);

	return (0);
}
