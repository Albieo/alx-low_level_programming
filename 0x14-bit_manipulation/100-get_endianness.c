#include "main.h"

/**
 * get_endianess - a function that checks the endianness.
 * 
 * Return: 0 if big endian, 1 if little endian
*/
int get_endianness(void)
{
	int n = 0;
	char *endian = (char *)&n;

	if (*endian == 1)
		return (1);

	return (0);
}
