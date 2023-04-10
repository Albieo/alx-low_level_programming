#include <stdio.h>

/**
 * main - prints all arguments it receives.
 *
 * @argc: Argument count
 * @argv: Command line array
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
