#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
int a, b;

for (a = 0; a < 100; a++)
{
for (b = 0; b < 100; b++)
{
if (a < b && a != b)
{
putchar((a / 10) + '0');
putchar((a % 10) + '0');
putchar(' ');
putchar ((b / 10) + '0');
putchar ((b % 10) + '0');
if (!(a == 98 && b == 99))
{
putchar(',');
putchar(' ');
}
}
}
}
putchar ('\n');
return (0);
}
