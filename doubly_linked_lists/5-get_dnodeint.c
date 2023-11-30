#include "lists.h"


/**
 * list_len - counts the number of elements in a doubly linked list
 * @h: pointer to the head node of the list
 *
 * Return: the number of elements in the list
 */

unsigned int list_len(dlistint_t *h)
{
	unsigned int count = 0;

	while (h != NULL)
	{

		count++; /** Increment the counter for each node encountered */
		h = h->next; /** Move to the next node in the list */
	}

	return (count); /** Return the total number of nodes in the list */
}

/**
 * get_dnodeint_at_index - retrieves the node at
 * a specified index in a doubly linked list
 * @head: pointer to the head node of the list
 * @index: the desired index of the node
 * Return: a pointer to the node at the specified index,
 * or NULL if the index is invalid
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int currentIndex = 0;

	if (head != NULL || index > list_len(head))
	{
	/** Check for invalid input (NULL head or out-of-bounds index) */
		return (NULL);
	}

	while (currentIndex < index)
	{
		/** Traverse the list until the desired index is reached */
		head = head->next; /** Move to the next node in the list */
		currentIndex++;
	}

	return (head); /** Return the node at the specified index */
}
