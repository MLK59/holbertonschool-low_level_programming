#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a specified index in a doubly linked list
 * @h: pointer to the head pointer of the doubly linked list
 * @idx: the index at which to insert the new node
 * @n: the data to store in the new node
 *
 * Return: a pointer to the newly inserted node, or NULL if the insertion failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
    if (idx == 0) {
        /**
         * Use the 'add_dnodeint' function for insertion at the beginning
         */
        return (add_dnodeint(h, n));
    }

    /**
     * Set 'current_node' to point to the head node of the list
     */
    dlistint_t *current_node = *h;

    while (i < idx - 1)
	{
        /**
         * Check if the current node is NULL, indicating an invalid index
         */
        if (!current_node)
		{

            return (NULL);
        }

        /**
         * Move to the next node in the list
         */
        current_node = current_node->next;
        i++;
    }

    /**
     * Check if the next node is NULL, indicating insertion at the end of the list
     */
    if (!current_node->next)
	{
        /**
         * Use the 'add_dnodeint_end' function for insertion at the end
         */
        return (add_dnodeint_end(h, n));
    }

    /**
     * Allocate memory for the new node
     */
    dlistint_t *new_node = malloc(sizeof(dlistint_t));
    if (!new_node) {

        return (NULL);
    }

    /**
     * Set the data for the new node
     */
    new_node->n = n;

    /**
     * Link the new node into the doubly linked list
     */
    new_node->next = current_node->next;
	/** Connect the new node to the next node in the list */
    new_node->prev = current_node; 
	/**Connect the new node to the previous node in the list */
    current_node->next->prev = new_node;
	/**Connect the next node to the new node */
    current_node->next = new_node;
	/** Connect the previous node to the new node */

    /**
     * Return a pointer to the newly inserted node
     */
    return (new_node);
}
