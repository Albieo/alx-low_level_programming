#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - a function that adds a new node at
 * the end of a listint_t list.
 *
 * @head: the beginning of the node
 * @n: set added to the node
 *
 * Return: pointer to new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr;
	listint_t *temp;

	ptr = malloc(sizeof(listint_t));
	
	if (!ptr)
		return (NULL);

	ptr->num = n;
	ptr->next = *head;
	
	if (*head == NULL)
	{
		*head = ptr;
		return (ptr);
	}

	while (temp->next)
		temp = temp->next;
	
	temp->next = ptr;

	return (ptr);
}
