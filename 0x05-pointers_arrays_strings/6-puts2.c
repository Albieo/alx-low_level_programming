#include "main.h"

/**
 * puts2 - function should print only 1 of 2 char, starting
 * with the first
 *
 * @str: input
 */
void puts2(char *str)
{
	int len = 0;
	int t = 0;
	char *y = str;
	int o;

	while (*y != '\0')
	{
		y++;
		len++;
	}
	t = len - 1;

	for (o = 0 ; o <= t ; o++)
	{
		if (o % 2 == 0)
	{
		_putchar(str[o]);
	}
	}
	_putchar('\n');
}
