#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s = "hello, world poop";
    char *f = "world";
    char *t;

char *f1 = "orld";
char *f2 = "od";
char *f3 = "z";

    t = _strstr(s, f);
    printf("%s\n", t);


    t = _strstr(s, f1);
    printf("%s\n", t);



    t = _strstr(s, f2);
    printf("%s\n", t);



    t = _strstr(s, f3);
    printf("%s\n", t);
    return (0);
}
