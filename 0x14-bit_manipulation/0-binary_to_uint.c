#include "holberton.h"

/**
* binary_to_uint - binary to unsigned int
* @b: the binary string we are given
*
* Description: does stuff via binary and bit manipulation
* Return: 0 is error or the converted number
*/

unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	unsigned int sendback = 1;
	unsigned int store = 0;
	int count = 0;
	int j = 0;

	if (!b)
		return (0);
	while (b[i])
	{
		if (b[i] < 48 || b[i] > 49)
			return (0);
		i++;
	}

	for (count = 0; i >= 0; i--, count++)
	{
		sendback = 1;
		if (b[i] == '1')
		{
			for (j = 0; j < count - 1; j++)
				sendback *= 2;
			store += sendback;
		}
	}
	return (store);
}
