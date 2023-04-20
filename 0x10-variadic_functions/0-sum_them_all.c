#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - a functions that adds int values
 *
 * @n: the number of parameters
 * @...: additional parameter in the exp
 *
 * Return: sum of the values passed
 */
int sum_them_all(const unsigned int n, ...)
{
	if (n == 0)
	{
		return (0);
	}
	else
	{
		unsigned int i, sum = 0;

		va_list args;

		va_start(args, n);

		for (i = 0; i < n; i++)
		{
			sum += va_arg(args, int);
		}
		va_end(args);

		return (sum);
	}
}
