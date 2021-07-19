#include "dog.h"
#include <stdio.h>
/**
 * print_dog - function that prints a struct dog
 *
 * @d: a pointer to the struct dog
 *
 * Return:void
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		/* I print as the example */
		/* I use the ? operator */
		/* return its left-hand operand if is not null */
		/* otherwise,evaluates the righ operand and return its result*/
		printf("Name: %s\n", d->name ? d->name : "(nil)");
		/* compiler doesn't let me add condition for the float type */
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
	}
}
