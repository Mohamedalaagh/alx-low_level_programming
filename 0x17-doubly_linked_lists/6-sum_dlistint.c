#include "lists.h"

/**
 * sum_dlistint - Returns the sum of all the data 
 * of a doubly linked list.
 *
 * @head: Head of the list
 * Return: Sum of the data
 */
int sum_dlistint(dlistint_t *head)
{
	int s;

	s = 0;

	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;

		while (head != NULL)
		{
			s += head->n;
			head = head->next;
		}
	}

	return (s);
}

