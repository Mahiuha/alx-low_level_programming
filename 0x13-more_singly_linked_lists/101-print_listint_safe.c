#include "lists.h"

/**
* print_listint_safe - prints a list but safely
* @head: the head node. pointer
*
* Description: dont wanna print a infinite loop
*	either match addresses or free the head so cant loop back
* Return: the count number
* A: we make an array that will store everything from head given
* B: while the head is not null, we iterate through
* C: count is initially 0 and i is 0 so we dont even loop through the first
*	time, we skip this. we assign array to the head and increment head
*	then we increase count so when we loop through again, we can go
*	into the for loop
* D: inside the loop, we check if the head value is equal to the array values
*	if we found a match then we turn the boolean flag on and break and
*	we make the index equal to whatever the i counter was
* E: if we found a match, which is a loop, we break out of the while loop
* F: new loop, we will loop through our array values we copied over from head
*	and we print out their pointer address and their value.
* G: if we had an infinite loop we have a flag check of 1 which will
*	also print out the index which is the last one.
*/

size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	size_t index = 0;
	listint_t const **array;/* A */

	array = malloc(sizeof(listint_t *) * 1024);
	if (!array)
		exit(98);
	unsigned int i = 0;
	unsigned int flag = 0;

	while (head != NULL)/* B */
	{
		for (i = 0; i < count; i++)/* C*/
		{
			if (head == array[i])/* D */
			{
				flag = 1;
				index = i;
				break;
			}
			else
				flag = 0;
		}

		if (flag == 1)/* E */
			break;
		array[count] = head;
		head = head->next;
		count++;
	}

	i = 0;
	while (i < count)/* F */
	{
		printf("[%p] %d\n", (void *)array[i], array[i]->n);
		i++;
	}
	if (flag == 1)/* G */
	{
		printf("-> [%p] %d\n", (void *)array[index], array[index]->n);
	}
	free(array);
	return (count);
}
