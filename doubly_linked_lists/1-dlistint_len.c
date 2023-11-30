#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked list
 * @h: head of the doubly linked list
 * Return: int
 */

size_t dlistint_len(const dlistint_t *h)
{
	int index = 0;

	/**
	 * Traverse the doubly linked list,
	 * incrementing the counter for each element
	 */
	while (h)
	{
		index++;

		/** Move to the next element in the list */
		h = h->next;
	}

	/** Return the total number of elements in the list */
	return (index);
}
