#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - a function that deletes the head node of
 * a listint_t linked list, and returns the head node’s data (n).
 *
 * @head: pointer to the first node
 *
 * Return: the deleted element
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n0;

	if (!head || !*head)
		return (0);

	n0 = (*head)->n;
	temp = (*head)->next;
	free(*head);
	(*head) = temp;

	return (n0);
}
