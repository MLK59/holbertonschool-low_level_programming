#include "lists.h"

/**
 * list_len - calculates the length of a linked list
 * @h: pointer to the head of the list
 * Return: the number of nodes
 */
size_t list_len(const list_t *h)
{

    /*
     * Variable to store the number of nodes
     */
     int count = 0;

    /*
     * Iterate through the list, incrementing `count`
		 * for each node encountered.
     */
		while (h != NULL)
		{
		count++;
		h = (*h).next;
    }

    /*
     * Return the value of `count`,
		 * which represents the length of the linked list.
     */
		return (count);
}

