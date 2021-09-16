#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes the node at index od a DLL
 * @head: double pointer to the head of the list
 * @index: the node that should be delete
 * Return: 1 if it succeeded or -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *aux_head = *head;

	if (*head == NULL)
		return (-1);
	while (index > 0)
	{
		if (aux_head == NULL)
			return (-1);
		aux_head = aux_head->next;
		index--;
	}
	if (aux_head == *head)
	{
		*head = aux_head->next;
		(*head)->prev = NULL;
	}
	else
	{
		aux_head->prev->next = aux_head->next;
		if (aux_head->next)
			aux_head->next->prev = aux_head->prev;
	}
	free(aux_head);
	return (1);
}
