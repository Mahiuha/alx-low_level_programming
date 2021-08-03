#include "lists.h"
/**
 * free_listint - frees listint_t
 * @head: pointer to the head of the list
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *firstnode;
	/* check if head is null */
	/* if yes the list is empty and we just return */
	while (head != NULL)
	{
		/*save the head in a firstnode variable */
		firstnode = head;
		head = head->next;
		free(firstnode);
	}
}
