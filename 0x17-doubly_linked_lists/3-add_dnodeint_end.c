#include "lists.h"
/**
 * add_dnodeint_end - adds a new node at the end of a DLL
 * @head: double pointer to the beggining of the list
 * @n: content of the new node to be add
 * Return: the address of the new element or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *last_node;
	dlistint_t *addrs_new_node;

	addrs_new_node = malloc(sizeof(dlistint_t));
	if (addrs_new_node == NULL)
		return (NULL);
	/* add data to addrs_new_node */
	addrs_new_node->next = NULL;
	addrs_new_node->n = n;
	/* make last_node the head to traverse the list till the end */
	last_node = *head;
	if (last_node == NULL)
	{
		/* if the list is null */
		/* addrs_new_node becomes the head of the list*/
		addrs_new_node->prev = NULL;
		*head = addrs_new_node;
		return (addrs_new_node);
	}
	/* else, traverse till last node */
	while (last_node->next != NULL)
		last_node = last_node->next;
	/* when we get the end of the list change next of last_node*/
	/* with the new_node */
	last_node->next = addrs_new_node;
	addrs_new_node->prev = last_node;
	return (addrs_new_node);
}
