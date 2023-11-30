#include "lists.h"

/**
 * free_dlistint - frees a list
 * @head: the head of the doubly linked list
 */

void free_dlistint(dlistint_t *head)
{
	if (!head)
	{
		/** Handle the case where the head is NULL */
		return;
	}

	/** Recursively free the remaining nodes in the list */
	free_dlistint(head->next);

	/** Free the current node */
	free(head);
}
