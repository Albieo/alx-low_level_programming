#include "lists.h"

/**
 * free_dlistint - a function that frees a linked list
 * @head: head of the linked list
 *
 * Returns: Nothing
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	if (head == NULL)
		return;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}

