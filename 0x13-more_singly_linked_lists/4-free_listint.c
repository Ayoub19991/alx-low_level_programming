#include "lists.h"

/**
 * free_listint - Frees a linked list.
 * @head: Pointer to the listint_t list to be freed.
 *
 * This function iter through d linked list n frees each node 1 by 1.
 * 4 each node, it stores d next node's addrs in a tempo var 'temp',
 * frees d curr node using `free()`, n then updt 'head' 2 p 2 d
 * next node in d list. This proc continues til d ent list is freed.
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
	temp = head->next;
	free(head);
	head = temp;
	}
}
