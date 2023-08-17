#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of the linked list
 * @head: head of the linked list
 * @n: value of new node
 *
 * Return: the address of the new element, or NULL if it failed
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *p = *head;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		while (p->next)
			p = p->next;
		p->next = new;
	}

	new->prev = p;

	return (new);
}
