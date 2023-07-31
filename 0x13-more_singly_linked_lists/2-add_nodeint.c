#include "lists.h"

/**
 * add_nodeint - Adds a new node at the beginning of a linked list.
 * @head: Pointer to a pointer to the first node in the list.
 * @n: Data to insert in the new node.
 *
 * This function allocates memory for a new node and inserts it at the
 * beginning of the linked list. It updates the 'next' pointer of the new node
 * to point to the current head of the list and updates the head pointer to
 * point to the new node, effectively making it the new head of the list.
 *
 * Return: Pointer to the new node, or NULL if it fails to allocate memory.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
	return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
