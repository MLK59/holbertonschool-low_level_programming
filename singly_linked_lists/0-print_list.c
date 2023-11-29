#include "lists.h"
/**
 * print_list - prints all the elements of a list_t
 * @h: pointer to the head of the list
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
    /*
     * Variable to store the number of nodes
     */
	size_t num_nodes = 0;

    /*
     * Iterate through the list
     */
	while (h != NULL)
	{
		/*
		* Check if the node's string is NULL
		*/
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%lu] %s\n", (*h).len, (*h).str);
		}
		 /**
		  * Increment the number of nodes
		  */
		 num_nodes++;
		/*
		 * Update the pointer to the next node
		 */
		h = h->next;

	}

    /*
     * Return the number of nodes
     */
	return (num_nodes);
}
