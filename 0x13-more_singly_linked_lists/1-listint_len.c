#include "lists.h"

/**
 * listint_len - Returns the number of elements in a linked list.
 * @h: Pointer to the linked list of type listint_t to traverse.
 *
 * This function iterates through the linked list pointed to by 'h'
 * and counts the number of nodes present in the list.
 *
 * Return: The number of nodes in the linked list.
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
	num++;
	h = h->next;
	}

	return (num);
}