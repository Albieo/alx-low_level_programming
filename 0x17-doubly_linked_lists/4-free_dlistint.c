#include "lists.h"

/**
 * free_dlistint - a function that frees a linked list
 * @head: head of the linked list
 *
 * Returns: Nothing
*/
void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
		return;

	while (head->next)
	{
		head = head->next;
		free(head->prev);
	}

	free(head);
}
