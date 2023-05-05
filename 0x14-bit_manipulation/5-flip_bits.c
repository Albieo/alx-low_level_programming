#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to
 * flip to get from one number to another.
 *
 * @n: First number of the exclu
 * @m: Second number of the exclu
 *
 * Return: number of bits flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int curr;
	unsigned long int xor = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		curr = xor >> i;

		if (curr & 1)
		{
			count++;
		}
	}

	return (count);
}
