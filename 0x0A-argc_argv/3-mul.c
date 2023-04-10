#include <stdio.h>
#include <stdlib.h>

/**
 * main -  multiplies two numbers.
 *
 * @argc: argument count
 * @argv: command line array
 *
 * Return: Always 0 (Suceessful) 1 (Error)
 */
int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		int x = atoi(argv[1]);
		int y = atoi(argv[2]);

		printf("%d\n", (x * y));

		return (0);
	}
	else
	{
		printf("Error\n");

		return (1);
	}
}
