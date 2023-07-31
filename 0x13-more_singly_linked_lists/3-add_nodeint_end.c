#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the end of a linked list.
 * @head: Pointer to a pointer to the first element in the list.
 * @n: Data to insert in the new element.
 *
 * This function allocates memory for a new node and inserts it at the
 * end of the linked list. If the list is empty, it updates the head pointer
 * to point to the new node. Otherwise, it traverses the list to find the last
 * node and then appends the new node to it by updating the 'next' pointer.
 *
 * Return: Pointer to the new node, or NULL if it fails to allocate memory.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *temp = *head;

	new = malloc(sizeof(listint_t));
	if (!new)
	return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
	*head = new;
	return (new);
	}

	while (temp->next)
	temp = temp->next;

	temp->next = new;

	return (new);
}
