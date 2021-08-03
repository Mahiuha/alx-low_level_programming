#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the nodet at index of listint_t list
 * @head: double pointer to the head of the list
 * @index: index of the node should be deleted
 * Return: 1 if it succeeded and -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node;
	unsigned int pos;

	pos = 0;
	while (*head)
	{
		/* with the position we find the index we need to delete */
		if (pos == index)
		{
			/* node is the one we want to delete */
			/* that is in the index position */
			/* so we point to that  node through *head */
			node = (*head);
			/* *head moves to next node */
			(*head) = (*head)->next;
			/* node remains in the index position and we deleted */
			/* releasing that memory */
			free(node);
			/* success return 1 */
			return (1);
		}
		/* if the position isn't equal to the index we're looking for */
		/* move head to next */
		head = &(*head)->next;
		/* and counte position keeps incrementing */
		pos++;
	}
	/* failed return -1 */
	return (-1);
}
