#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - a function that prints numbers,
 * followed by a new line.
 *
 * @separator: a character used to split args
 * @n: number of arguments
 * @...: additional arguments passed in function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));

		if (i != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");

	va_end(args);
}