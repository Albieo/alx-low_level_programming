#include "lists.h"

/**
 * sum_dlistint - a function that sums all data of linked list
 * @head: head of linked list
 *
 * Returns: The sum, 0 if list is empty
*/
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head)
	{
		while (head->next == NULL)
			head = head->next;

		while (head)
		{
			sum += head->n;
			head = head->next;
		}
	}

	return (sum);
}
