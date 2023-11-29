#include "lists.h"

/**
 * _strlength - The lentgh of string
 * @string: pointer type char
 * Return: Always 0
*/

int _strlength(const char *string)
{
	int length;

	for (length = 0; string[length] != '\0'; length++)
	{
	}
	return (length);
}
/**
 * add_node_end - Adds a new node to the end of a linked list
 * @str: The string to add to the end of the list
 * @head: Pointer to a pointer to the head of the list
 * Return: The address of the new node, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	/** Allocate memory for a new node */
	list_t *new_node = malloc(sizeof(list_t));

	/** Check if allocation was successful */
	if (new_node == NULL)
	{
		return (NULL);
	}

	/** Duplicate the string and assign it to the node's str member */
	new_node->str = strdup(str);

	/** Set the node's len member to the length of the string */
	new_node->len = _strlength(str);

	/** Set the node's next pointer to NULL */
	new_node->next = NULL;

	/** Check if the list is empty */
	if (*head == NULL)
	{
		/** If the list is empty, set the head pointer to the new node */
		*head = new_node;
	}
	else
	{
		/** If the list is not empty, traverse the list to find the last node */
		list_t *temp_new = *head;

		while (temp_new->next)
		{
			temp_new = temp_new->next;
		}

		/** Set the next pointer of the last node to the new node */
		temp_new->next = new_node;
	}

	/** Return the address of the new node */
	return (new_node);
}
