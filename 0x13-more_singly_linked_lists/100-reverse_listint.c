#include "lists.h"

/**
 * reverse_listint - reverse a linked list
 * @head: pointer to d first node in d list
 *
 * Return: pointer 2 d first node in d new list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}

	*head = prev;

	return (*head);
}
