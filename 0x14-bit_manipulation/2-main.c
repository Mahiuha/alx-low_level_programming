#include <stdio.h>
#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    int n;

    n = get_bit(1024, 10);
    printf("%d\n", n);
    n = get_bit(98, 1);
    printf("%d\n", n);
    n = get_bit(1024, 0);
    printf("%d\n", n);

n = get_bit(0, 0);
    printf("0,0 chould be 0 %d\n", n);
n = get_bit(0, 1);
    printf("0,1 should be -1 %d\n", n);
n = get_bit(1, 1);
    printf("1,1 should give -1 %d\n", n);
n = get_bit(0, 2);
    printf("0,2 should give -1 %d\n", n);
n = get_bit(2, 1);
    printf("2,1 should give 1 %d\n", n);
n = get_bit(2, 2);
    printf("2,2 should give -1 %d\n", n);
n = get_bit(3, 1);
    printf("3,1 should give 1  %d\n", n);
n = get_bit(3, 2);
    printf("3,2 should give -1 %d\n", n);
    return (0);
}
