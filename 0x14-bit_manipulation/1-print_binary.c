#include "main.h"

void print(char c);
/**
 * print_binary - prints the binary representation of a number.
 *
 * @n: integer changed to binary
 */
void print_binary(unsigned long int n)
{
	int i, count = 0;
	unsigned long int curr;

	for (i = 63; i >= 0; i--)
	{
		curr = n >> i;

		if (curr & 1)
		{
			print('1');
			count++;
		}
		else if (count)
		{
			print('0');
		}
	}

	if (!count)
	{
		print('0');
	}
}
/**
 * print - print char input
 * @c: char to be printed
 */
void print(char c)
{
	_putchar(c);
}
