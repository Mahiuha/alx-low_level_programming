#include <stdio.h>
#include "dog.h"
/**
 * init_dog - initialize a variable of type struct dog
 *
 * @d: pointer to the variable struct dog
 * @name: a pointer to the variable char type
 * @age: variable float type
 * @owner: a pointer to a type char variable
 *
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	/* to access elements of a pointer to a structure */
	/* you have to dereference the pointer */
	/* and then access to the data */
	/* the simple way to do this is using '->' symbol */
	/* is the same than using '.' symbol */
	/* e.g (*ptr).name is the same than ptr->name but easier :) */

	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
