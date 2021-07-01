#include "holberton.h"

/**
* infinite_add - a function that adds two numbers
* @n1: a char pointer given by main that represents a num
* @n2: a char pointer given by main that represents a num
* @r: a buffer given by main
* @size_r: the buffer size given by main
*
* Description: a function that adds numbers that are passed
*	as a strings and we add them up
* Return: the result to char *r
* A: count up how long both n1 and n2 is
* C: A counter is 1 more than the index numbers so we need to decrement by 1
* D: if the buffer size given is less than the size of i or j
*	then we want to return 0 which signals main error
* E: we sum and append the last digit. we will need to swap later
*	we loop from the last indices and go until size_r
* F: We add up the index of n1[i] and n2[j]
* G: if i and j are negative we break out of the loop because we have
*	iterated through all the character arrays and there is nothing left
* H: Simple overflow handling. we want the last digit and if we had
*	a number with a 1 in the tens digit we store that in tens
*	we then incluide that 1 in the sum and move on
* I: We had to swap because at step E we added and made our r[k]
*	array from the end to the beginning instead of to the beginning
*	to the end. this helped us deal with carry on ints but
*	the downside is we need to swap later on which is tedious.
*	another way of going forward to back and not having to deal with swaps
*	would be a complex r[i-1] += 1 type of situation but that can be
*	iffy with out of bounds array issues and some other stuff
* J: So if we had k reach the size_r but we still had more i and j indicies
*	to add then that is an error and we didnt finish so return 0
* K: k was our buffer size counter. so it is only fitting we had to put the
*	last char with the k counter as the null char. then we k--
*	so we can start at the very last index right next tot the null char
*/

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i = 0, j = 0, k = 0;
	int sum = 0;
	int tens = 0;
	int begin = 0;
	int swap = 0;

	while (n1[i] != 0)/* A */
		i++;
	while (n2[j] != 0)
		j++;
	i--;/* C */
	j--;
	if (i > size_r || j > size_r)/* D */
		return (0);
	for ( ; k < size_r; i--, j--, k++)/* E */
	{
		sum = tens;
		if (i >= 0)/* F */
			sum += n1[i] - '0';
		if (j >= 0)
			sum += n2[j] - '0';
		if (i < 0 && j < 0 && sum == 0)/* G */
			break;
		tens = sum / 10;/* H */
		r[k] = sum % 10 + '0';
	}
	if (i >= 0 || j >= 0 || sum > 0)/* J */
		return (0);
	r[k] = '\0';/* K */
	k--;
	for ( ; begin < k; k--, begin++)/* I */
	{
		swap = r[k];
		r[k] = r[begin];
		r[begin] = swap;
	}
	return (r);
}
