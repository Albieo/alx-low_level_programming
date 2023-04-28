#include <stdio.h>
#include "lists.h"

/**
 * print_list - a function that prints all the elements of a list_t list.
 *
 * @h: a pointer to list_t struct
 *
 * Return: the number of nodes in the linked list
 */
size_t print_list(const list_t *h)
{
	size_t s = 0;

	while (h != NULL)
	{
		if (h->str)
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		else
		{
			printf("[0] (nil)\n");
		}
		h = h->next;
		s++;
	}

	return (s);
}
