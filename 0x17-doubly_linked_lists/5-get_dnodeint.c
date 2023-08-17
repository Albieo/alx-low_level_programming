#include "lists.h"

/**
 * get_dnodeint_at_index - retrieves the nth node of linked list
 * @head: head of the linked list
 * @index: index of the node, starting from 0
 *
 * Returns: the nth node, NULL if node does not exist
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
		return (NULL);

	for (i = 0; i < index && head; ++i)
	{
		head = head->next;
	}

	return (head);
}
