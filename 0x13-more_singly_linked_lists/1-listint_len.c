#include "lists.h"
/**
 * listint_len - prints the number of elements in listint_t list
 * @h: constant pointer type list_t
 *
 * Return: the numbers of nodes
 */
size_t listint_len(const listint_t *h)
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
