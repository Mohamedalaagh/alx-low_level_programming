#include "lists.h"

/**
 * dlistint_len - Returns the num of elements in
 * a double linked list
 *
 * @h: Head of the list
 * Return: The num of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
    int i;

    i = 0;

    if (h == NULL)
        return (i);

    while (h->prev != NULL)
        h = h->prev;

    while (h != NULL)
    {
        i++; 
        h = h->next;
    }

    return (i);
}

