#include "search_algos.h"

/**
 * binary_search - function that searches for a value in a sorted array of
 * integers using the Binary search algorithm.
 * @array: a pointer to the first element of the array to search in.
 * @size: the number of elements in array.
 * @value: the value to search for.
 *
 * Return: the index of the value or -1 if array is NULL and value not found.
*/
int binary_search(int *array, size_t size, int value)
{
	size_t left = 0;
	size_t right = size - 1;
	size_t mid, i;

	if (array == NULL)
		return (-1);

	printf("Searching in array: ");
	for (i = 0; i < size; i++)
	{
		printf("%i", array[i]);
		if (i != size - 1)
	    		printf(", ");
	}
	printf("\n");

	while (left <= right)
	{
		mid = (left + right) / 2;

		if (array[mid] < value)
			left = mid + 1;
		else if (array[mid] > value)
			right = mid - 1;
		else
			return (mid);

		if (left <= right)
			{
			printf("Searching in array: ");
			for (i = left; i <= right; ++i)
			{
			printf("%i", array[i]);
			if (i != right)
				printf(", ");
			}
			printf("\n");
		}
	}

	return (-1);
}
