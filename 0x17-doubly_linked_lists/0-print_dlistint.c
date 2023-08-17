#include "lists.h"

/**
 * print_dlistint - prints all elements in a linked list
 * @h: head of linked list
 *
 * Return: the number of nodes, 0 if empty
*/
size_t print_dlistint(const dlistint_t *h)
{
	int count = 0;

	if (h == NULL)
		return (count);

	while (h->next == NULL)
		h = h->next;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}

	return (count);
}
