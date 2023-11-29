#include "lists.h"

/**
 * free_list - Free the memory used by a linked list
 * @head: Pointer to the head of the linked list
 * Return: Nothing
 */
void free_list(list_t *head)
{
	/** Create a temporary pointer to traverse the list */
	list_t *temporary = head;

	/** Iterate through the list until the end is reached */
	while (head != NULL)
	{
		/** Store the current node in the temporary pointer */
		temporary = head;

		/** Advance the head pointer to the next node */
		head = head->next;

		/** Free the string associated with the current node */
		free(temporary->str);

		/** Free the memory allocated for the current node */
		free(temporary);
	}

	/** Free the head pointer, which is now NULL */
	free(head);
}
