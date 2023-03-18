#include <stdio.h>

/**
 * main - print num 0 - 9
 *
 * Return: Always 0
 *
 */
int main(void)
{
	int i;

	for (i = 48; i < 57; i++)
	{
		putchar(i);
		putchar(44);
		putchar(32);
	}
	putchar(57);
	putchar('\n');
	return (0);
}
