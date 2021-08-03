#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: double pointer to the head of the listint list
 * @idx: is the index of the list where the new node should be added
 * @n: is the data
 * Return: Null if it failed or the address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *headaux;
	listint_t *newnode;
	unsigned int size;

	size = 0;
	/* allocate memory for the newnode */
	newnode = malloc(sizeof(listint_t));
	/* task condition */
	if (newnode == NULL)
		return (NULL);
	/* n keeps being the data of the new node */
	newnode->n = n;
	/*  given the case, if index is cero then newnode is equal to head */
	/* and return newnode in head of the list */
	if (idx == 0)
	{
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}
	/* usea de auxiliar */
	headaux = *head;
	/* if index is different to the position */
	/* counter size keeps running and headaux moves to the next node */
	while (headaux != NULL && size != idx - 1)
	{
		size++;
		headaux = headaux->next;
	}
	/* if index and size are equal and non NULL */
	if (size == idx - 1 && headaux != NULL)
	{
		newnode->next = headaux->next;
		headaux->next = newnode;
		return (newnode);
	}
	free(newnode);
	return (NULL);
}
