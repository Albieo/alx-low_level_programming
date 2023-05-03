#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - a function that adds a new node at
 * the beginning of a listint_t list.
 *
 * @head: the beginning of the node
 * @n: set added to the node
 *
 * Return: pointer to new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr;

	ptr = malloc(sizeof(listint_t));

	if (!ptr)
		return (NULL);

	ptr->n = n;
	ptr->next = *head;
	*head = ptr;

	return (ptr);
}
