#include <time.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * main - Program that generates random valid passwords
 * @void: Empty input
 *
 * Description: Program that generates random valid passwords
 * Return: 0 if works
 */
int main(void)
{
	int i = 0, random, checksum;

	srand(time(NULL));
	checksum = 2772;
	while (checksum > 122)
	{
		random = (rand() % 100);
		printf("%c", random);
		checksum -= random;
		i++;
	}
	printf("%c", checksum);
	return (0);
}
