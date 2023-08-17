#include "lists.h"

/**
 * dlistint_len - number of elements in a linked list
 * @h: head of linked list
 *
 * Return: the number of elements, 0 if empty
*/
size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	if (h == NULL)
		return (count);

	while (h->next == NULL)
		h = h->next;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
