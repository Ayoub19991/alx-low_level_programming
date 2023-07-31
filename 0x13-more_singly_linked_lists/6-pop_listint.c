#include "lists.h"

/**
 * pop_listint - deletes d head node of a linked list
 * @head: pointer 2 d first elm in d linked list
 *
 * Return: d data inside d elms that was deleted,
 * or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}
