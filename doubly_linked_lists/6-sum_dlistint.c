#include "lists.h"

/**
 * sum_dlistint - calculates the sum of all the data in a doubly linked list
 * @head: pointer to the head node of the list
 *
 * Return: the sum of all the data in the list
 */
int sum_dlistint(dlistint_t *head)
{

	int sum = 0;

	/**
	 * Check if the list is empty
	 */
	if (!head)
	{
		return (0);
	}

	/**
	 * Iterate through the list
	 */
	while (head != NULL)
	{
		/**
		 * Add the current node's data to the sum
		 */
		sum += head->n;
		/**
		 * Move to the next node in the list
		 */
		head = head->next;
	}
	return (sum);
}

