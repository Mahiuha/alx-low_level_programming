#include "lists.h"
/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: double pointer to list_t
 * @str: pointer to the first node in list_t
 * Return: a poitner to the new string or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	int runner;
	list_t *new_node;

	if (!str)
		return (NULL);
	/* must allocate memory for our new node pointer */
	new_node = malloc(sizeof(list_t));
	runner = 0;
	if (new_node)
	{
		/* derefence what str is pointing to */
		/* create a copy with strdup */
		new_node->str = strdup(str);
		/* if is not the new pointer to the new string duplicate */
		if (!new_node->str)
		{
			/* we freed the memory allocated */
			/*and function return null */
			free(new_node);
			return (NULL);
		}
		while (new_node->str[runner])
			runner++;
		/* now we must tell the new string will be the new fisrt node */
		/* of our linked list */
		/* and we conect it to head telling it the next node*/
		/* the pointer is going to point is head node */
		/* in that instance the head now will be the */
		/* node with the pointer duplicate */
		new_node->len = runner;
		new_node->next = *head;
		*head = new_node;
		/* now return the pointer to the address of the new string */
		return (new_node);
	}
	/* null if it failed */
	return (NULL);
}
