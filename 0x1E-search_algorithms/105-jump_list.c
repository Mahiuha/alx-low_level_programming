#include "search_algos.h"

listint_t *recurse_helper(listint_t *curr, size_t size, size_t step, int val);
listint_t *subrecurse_help(listint_t *curr, size_t step, int val);
listint_t *look_ahead(listint_t *probe, size_t step);

/**
 * jump_list - jump search for linked list
 * @list: list to search
 * @size: size of list
 * @value: search value
 *
 * Return: index of matched value; NULL if not found
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	if (list == NULL)
		return (NULL);

	return (recurse_helper(list, size, sqrt(size), value));
}
/**
 * recurse_helper - recursive implement of jump search
 * @curr: current node of list
 * @size: size of list
 * @step: jump increment
 * @val: search value
 *
 * Return: index where value is located; -1 if value not found
 */
listint_t *recurse_helper(listint_t *curr, size_t size, size_t step, int val)
{
	listint_t *next_step = NULL; /* pointer to next step */

	/* printf("Value checked at index [%lu] = [%d]\n", curr->index, curr->n); */

	/* if value is greater than next_step, jump forward */
	next_step = look_ahead(curr, step);
	printf("Value checked at index [%lu] = [%d]\n",
next_step->index, next_step->n);
	if (curr->index + step < size && (next_step->n < val))
		return (recurse_helper(next_step, size, step, val));

	/* recurse subarray */
	printf("Value found between indexes [%lu] and [%lu]\n",
curr->index, (next_step->index));

	return (subrecurse_help(curr, step, val));
}

/**
 * look_ahead - check value at next step
 * @probe: pointer sent out to check next step in list
 * @step: jump interval
 *
 * Return: value at next jump interval
 */
listint_t *look_ahead(listint_t *probe, size_t step)
{
	if (step <= 0 || probe->next == 0)
		return (probe); /* return value at next step */
	return (look_ahead(probe->next, step - 1));
}

/**
 * subrecurse_help - recursive implement for recursive implement
 * @curr: current node to check
 * @step: interval of jumps
 * @val: search value
 *
 * Return: index where value is located; -1 if value not found
 */
listint_t *subrecurse_help(listint_t *curr, size_t step, int val)
{
	if (curr == NULL || step <= 0 || curr->n > val)
		return (NULL);

	printf("Value checked at index [%lu] = [%d]\n", curr->index, curr->n);

	if (curr->n == val)
		return (curr);
	else
		return (subrecurse_help(curr->next, step - 1, val));
}
