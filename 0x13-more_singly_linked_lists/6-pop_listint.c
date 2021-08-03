#include "lists.h"
/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: double pointer to the head of the list
 *
 * Return: the head nodes data (n)
 */
int pop_listint(listint_t **head)
{
	int n = 0;
	listint_t *ptraux;
	/* task condition */
	if (*head == NULL)
		return (0);
	/* n is equal to the head de reference to n from the structure */
	/* that is the nodes data (n) that are integers */
	n = (*head)->n;
	/* head goes to the next node */
	ptraux = (*head)->next;
	/* frees head so the head node is deleted */
	free(*head);
	/* now ptraux is the new head node */
	*head = ptraux;
	/* return the head nodes data that is n according to the structure */
	return (n);
}
