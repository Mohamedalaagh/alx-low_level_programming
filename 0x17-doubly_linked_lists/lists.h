#ifndef _LISTS_
#define _LISTS_

#include <stdio.h>
#include <stdlib.h>

/**
 * struct dlistint_s - Doubly linked list
 * @n: Integer data
 * @prev: Points to the previous node
 * @next: Points to the next node
 *
 * Description: Doubly linked list node structure for Holberton project
 */
typedef struct dlistint_s
{
    int n;
    struct dlistint_s *prev;
    struct dlistint_s *next;
} dlistint_t;

/**
 * print_dlistint - Prints all the elements of a dlistint_t list
 *
 * @h: Head of the list
 * Return: The number of nodes
 */
size_t print_dlistint(const dlistint_t *h);

/**
 * dlistint_len - Returns the number of elements in a linked dlistint_t list
 *
 * @h: Head of the list
 * Return: The number of nodes
 */
size_t dlistint_len(const dlistint_t *h);

/**
 * add_dnodeint - Adds a new node at the beginning of a dlistint_t list
 *
 * @head: Address of the head pointer
 * @n: Integer data for the new node
 * Return: Address of the new element or NULL if it fails
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n);

/**
 * add_dnodeint_end - Adds a new node at the end of a dlistint_t list
 *
 * @head: Address of the head pointer
 * @n: Integer data for the new node
 * Return: Address of the new element or NULL if it fails
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);

/**
 * free_dlistint - Frees a dlistint_t list
 *
 * @head: Head of the list
 */
void free_dlistint(dlistint_t *head);

/**
 * get_dnodeint_at_index - Returns the nth node of a dlistint_t linked list
 *
 * @head: Head of the list
 * @index: Index of the node to return
 * Return: Address of the node or NULL if it does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);

/**
 * sum_dlistint - Returns the sum of all the data (n) of a dlistint_t list
 *
 * @head: Head of the list
 * Return: Sum of all the data (n)
 */
int sum_dlistint(dlistint_t *head);

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position
 *
 * @h: Address of the head pointer
 * @idx: Index of the new node
 * @n: Integer data for the new node
 * Return: Address of the new element or NULL if it fails
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n);

/**
 * delete_dnodeint_at_index - Deletes the node at index of a dlistint_t linked list
 *
 * @head: Address of the head pointer
 * @index: Index of the node to delete
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);

#endif /* _LISTS_ */

