#include "lists.h"
/**
 * print_dlistint - print all the elements of a dlistint_t list
 * @h: pointer to the head of the DLL
 * Return: the number of nodes type size_t
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t num_of_nodes;

	num_of_nodes = 0;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		num_of_nodes = num_of_nodes + 1;
	}
	return (num_of_nodes);
}
