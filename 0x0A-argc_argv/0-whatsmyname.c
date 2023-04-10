#include <stdio.h>

/**
 * main - prints its name, followed by a new line.
 *
 * @argc: Argument count
 * @argv: Command line array
 *
 * Return: Always 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);

	return (0);
}
