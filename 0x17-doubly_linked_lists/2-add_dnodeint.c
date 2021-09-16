#include "lists.h"
/**
 * add_dnodeint - adds a new node at the beginning of a DLL
 * @head: a double pointer to the head of the list
 * @n: the content of the new node
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *addrs_new_node;

	if (head == NULL)
		return (NULL);
	addrs_new_node = malloc(sizeof(dlistint_t));
	if (addrs_new_node == NULL)
		return (NULL);
	addrs_new_node->n = n;
	if (*head != NULL)
	{
		addrs_new_node->prev = NULL;
		addrs_new_node->next = (*head);
		(*head)->prev = addrs_new_node;
		*head = addrs_new_node;
		return (addrs_new_node);
	}
	addrs_new_node->next = NULL;
	addrs_new_node->prev = NULL;
	*head = addrs_new_node;
	return (addrs_new_node);

}
