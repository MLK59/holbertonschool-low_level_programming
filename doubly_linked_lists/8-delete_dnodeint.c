#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index of a linked list
 * @head: head of the structure
 * @index: index of the node that should be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	/**
	 * Handles the case where the node to be deleted is the first node
	 */
	dlistint_t *node_removed = *head;
	unsigned int i = 0;

	if (!*head)
		return (-1);

	if (index == 0)
		*head = node_removed->next;

	/**
	 * Traverses the list until the node to be deleted is found
	 */
	while (i < index && node_removed)
	{
		node_removed = node_removed->next;
		i++;
	}

	/**
	 * Checks if the index is out of bounds
	 */
	if (!node_removed)
		return (-1);

	if (node_removed->next) /** Updates the next pointer of the previous node*/
		node_removed->next->prev = node_removed->prev;

	if (node_removed->prev) /**Updates the previous pointer of the next node*/
		node_removed->prev->next = node_removed->next;

	free(node_removed);
	return (1);
}
