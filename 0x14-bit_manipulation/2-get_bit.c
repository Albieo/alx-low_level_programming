#include "main.h"

/**
 * get _bit - returns the value of a bit at a given index.
 *
 * @n: number to manipulate
 * @index: index to bit value
 *
 * Return: bit to index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	if (index >= 62)
	{
		return (-1);
	}

	bit = (n >> index) & 1;

	return (bit);
}
