#include "lists.h"
/**
 * free_list - frees list_t
 * @head: pointer to the head of the list
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *firstnode;
	/* check if head is null*/
	/* if yes the list is empty and we just return */
	while (head != NULL)
	{
		/* save the head in a firstnode varibale */
		firstnode = head;
		/* and make head point to the next node */
		/* on the list_t */
		head = head->next;
		/* now safelyu free the reference to str */
		free(firstnode->str);
		/* and free safely firstnode */
			free(firstnode);
			/*remember we freed memory fron the most inside */
			/* to outside */
	}
}
