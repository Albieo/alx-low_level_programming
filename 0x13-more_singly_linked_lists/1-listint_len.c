#include "lists.h"

/**
 * listint_len - a function that returns the number of elements
 * in a linked listint_t list.
 *
 * @h: pointer to linked list
 *
 * Return: number of nodes in linked list
 */
size_t listint_len(const listint_t *h)
{
	size_t n0 = 0;

	while (h)
	{
		n0++;
		h = h->next;
	}

	return (n0);
}
