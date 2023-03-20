#include "main.h"

/**
 * _islower - checks char in a string of 1 or more chars if char is lowercase
 *
 * @c: the char that has been checked
 *
 * Return: 1 if char is lower and 0 if not
 *
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
