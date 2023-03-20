#include "main.h"

/**
 * _isalpha - checks if a char/line is alphanumeric
 *
 * @c: is the char that has been checked
 *
 * Return: 1 f the char is an alphabet and 0 if not
 *
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
