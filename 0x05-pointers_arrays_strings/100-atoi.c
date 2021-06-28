#include "holberton.h"

/**
* _atoi - convers a string to an int
* @s: a pointer to a string guven by main
*
* Description: making our own atoi function
* Return: returns 0 if no numbers and the result if numbers
* A: counter is used to iterate through the array
* i will start incrementing once we find a num asnd be used to exit
* sign is used to count how many negative signs before the number
* result will be the total number. math on how is in the formula
* B: Loop through the given loop until the end or my break statement
* C: count all negative signs since we take them into account
* initially i just did s[counter - 1]== '-' and that worked
* but failed some test cases. i didnt know i had to have every sign. ignore +s
* D: So the ascii values of 0-9 is 48 - 57. if the indexed variable there
* is between that range then we increment i becaues we found a number
* and we store that result using math. result is result, times 10, which
* shifts the result variable all left, then we add the indexed number
* but because that number is an ascii value, we subtract by ascii 0 value
* F: after that number range check, we also check if the index value
* is outside the range of 0-9 and if i is greater than 0
* which meant we were counting numbers but the value is not a number
* anymore so we break the loop and just start our returns
* G: we increment counter if everything gucci = if we still got numbers.
* H: i is zero if we found no numbers at all in the string
* I: if the number of - signs are even, we return a positive result
* J: else we had an odd number of minuses and we return the result times -1
*/

int _atoi(char *s)
{
	int counter = 0;/* A */
	int i = 0;
	unsigned int result = 0;
	int sign = 0;

	while (s[counter] != '\0')/* B */
	{
		if (s[counter] == '-')/* C */
			sign++;
		if (s[counter] >= 48 && s[counter] <= 57)/* D */
		{
			i++;
			result = result * 10 + s[counter] - '0';/* E */
		}
		if (i > 0 && (s[counter] < 48 || s[counter] > 57))/* F */
			break;
	counter++;/* G */
	}
	if (i == 0)/* H */
		return (0);
	if (sign % 2 == 0)/* I */
		return (result);
	return (result * -1);/* J */
}
