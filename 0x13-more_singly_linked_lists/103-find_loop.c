#include "lists.h"

/**
* checker - helper function taht checks if stuff matches and if we in a loop
* @head: the head node
*
* Description: this function will check if we are in a loop
* Return: either Null or where we know a loop exists
* A: We will make 2 pointers that are equal to the head
*	kinda like DNA leading and lagging strand during replication
* B: We make the leading jump 2 times. we have the if and else check
*	there because if leading exists and we can go next, we do it
* C: if we cant then that means there was no infinite loop so return NULL
* D: So in this loop, if the lagging ever matched with the leading,
*	we know a loop existed and that we should return that back
*/

listint_t *checker(listint_t *head)
{
	listint_t *lagging = NULL;
	listint_t *leading = NULL;

	lagging = leading = head;/* A */
	while (lagging)
	{
		lagging = lagging->next;
		leading = leading->next;/* B */
		if (leading && leading->next)
			leading = leading->next;
		else/* C */
			return (NULL);
		if (lagging == leading)/* D */
			return (leading);
	}
	return (NULL);
}

/**
* find_listint_loop - finds where the loop in a linked list is
* @head: the head node
*
* Description: this is wrong i havent gotten it yhet
* Return: The address of the node where loop starts or null if none
* A: While the checker of head is a value, if the returned leading is
*	equal to the head, then we return the head because that is a loop
* B: we check if the return value matches our head
* C: we increment head and run the checker all over again.
*/

listint_t *find_listint_loop(listint_t *head)
{
	while (checker(head))/* A */
	{
		if (checker(head) == head)/* B */
			return (head);
		head = head->next;/* C */
	}
	return (NULL);
}
