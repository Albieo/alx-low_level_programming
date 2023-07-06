#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 *
 * @n: pointer to bit value
 * @index: index to bit
 *
 * Return: 1 (Sucessful), -1 (Error)
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= 62)
	{
		return (-1);
	}

	*n = (~(1UL << index) & *n);

	return (1);
}
