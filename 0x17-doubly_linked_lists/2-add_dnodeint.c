#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of the linked list
 * @head: head of the linked list
 * @n: value of new node
 *
 * Returns: the address of the new element, or NULL if it failed
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = NULL;

	new->next = *head;
	if (*head != NULL)
	{
		(*head)->prev = new;
	}

	*head = new;

	return (new);
}
