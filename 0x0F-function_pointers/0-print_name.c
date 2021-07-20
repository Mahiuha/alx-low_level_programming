#include "function_pointers.h"
/**
 * print_name - prints a name
 *
 * @name: pointer to a char
 * @f: a pointer to function that receives a pointer to char
 *
 * Return: void or NULL
 */
void print_name(char *name, void (*f)(char *))
{
	/* condition for the two pointers they must exist */
	/* also could be if they are different to NULL */
	if (name && f)
		/*de reference the pointer to the function f */
		/* to the pointer name */
		/* f receives a char *, and *name is type char */
		f(name);
}
