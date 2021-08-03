#include "lists.h"
/**
 * add_nodeint - adds a new node at the beginning of a list_t list
 * @head: double pointer to listint_t
 * @n: the number of elements in listint_t
 * Return: he address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));
	if (newnode)
	{
		newnode->n = n;
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}
	free(newnode);
	return (NULL);
}
