#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - a function that adds a new node
 * at the end of a list_t list.
 *
 * @head: a pointer to a pointer in linked list
 * @str: additional string inputed to node.
 *
 * Return: the address of the new element.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ptr;
	list_t *temp = *head;
	unsigned int len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	ptr = malloc(sizeof(list_t));

	if (!ptr)
	{
		return (NULL);
	}

	ptr->str = strdup(str);
	ptr->len = len;
	ptr->next = NULL;

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
