#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes of its own main function.
 *
 * @argc: number of argumenets in command line
 * @argv: arrays in command line
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i, j;
	char *array;

	if (argc != 2)
		printf("Error\n");
		exit(1);

	i = atoi(argv[1]);

	if (i < 0)
		printf("Error\n");
		exit(2);

	array = (char *)main;

	for (j = 0; j < i; j++)
	{
		if (j == i - 1)
			printf("%02hhx\n", array[j]);
			break;

		printf("%02hhx ", array[j]);
	}

	return (0);
}
