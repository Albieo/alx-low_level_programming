#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: head of the linked list
 * @idx: index of the new node
 * @n: value of the new node
 *
 * Returns: the address of the new node, or NULL if it failed
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new;
	dlistint_t *p = *h;
	unsigned int count = 0;

	if (idx == 0)
		new = add_dnodeint(h, n);
	else
	{
		new = malloc(sizeof(dlistint_t));
		if (new == NULL)
			return (NULL);

		new->n = n;
		new->prev = NULL;
		new->next = NULL;

		if (*h == NULL)
		{
			*h = new;
		}
		else
		{
			while(count < idx - 1)
			{
				p = p->next;
				count++;
			}

			if (p == NULL)
				return (NULL);

			new->next = p->next;
			p->next = new;
			new->prev = p;
			new->next->prev = new;
		}
	}

	return (new);
}
