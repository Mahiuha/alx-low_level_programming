#include "lists.h"
/**
 * sum_listint - sum all the data (n) of listint_t list
 * @head: a pointer to the head of the list
 * Return: 0 if the list is empty or the sum of all the data
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		/* find the sum of nodes */
		sumofnodes(head, &sum);
		/* required sum */
		return (sum);
	}
	return (0);
}
/**
 * sumofnodes - find the sum of ndoes
 * @head: a pointer to the head of the lintint_t list
 * @sum: integer that sums
 * Description: function to recursively find the sum of nodes
 * of the given linked list
 * Return: the sum
 */
void sumofnodes(listint_t *head, int *sum)
{
	int n;
	/* if head is equal to NULL */
	if (!head)
		return;
	/* de reference to n to the data */
	/* so I can make the sum */
	n = head->n;
	/* recursively traverse the remaining nodes  */
	sumofnodes(head->next, sum);
	/* accumulate sum */
	*sum = *sum + n;
}
