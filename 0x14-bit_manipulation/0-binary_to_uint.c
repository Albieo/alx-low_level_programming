#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 *
 * @b: pointer to binary input
 *
 * Return: integer changed from binary
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int bi = 0;

	if (b)
	{
		for (i = 0; b[i]; i++)
		{
			if (b[i] < '0' || b[i] > '1')
				return (0);

			bi = 2 * bi + (b[i] - '0');
		}
	}

	else if (!b)
	{
		return (0);
	}

	return (bi);
}
