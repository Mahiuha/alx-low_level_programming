#include "lists.h"
/**
 * list_len - returns the numbers of elements in list_t
 * @h: constant pointer type list_t
 *
 * Return: numbers of elements in list_t
 */
size_t list_len(const list_t *h)
{
	size_t numele;

	numele = 0;

	while (h != NULL)
	{
		numele++;
		h = h->next;
	}
	return (numele);
}
