#include <stdio.h>
#include "lists.h"

/**
 * print_listint - a function that prints all
 * the elements of a listint_t list.
 *
 * @h: linked list to listint_t
 *
 * Return: number of nodes present
 */
size_t print_listint(const listint_t *h)
{
	size_t n0 = 0;

	while (h)
	{
		printf("%i\n", h->n);
		n0++;
		h = h->next;
	}

	return (n0);
}
