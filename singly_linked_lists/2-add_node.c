#include "lists.h"

/**
 * _strlen - The lentgh of string
 * @string: pointer type char
 * Return: Always 0
*/

int _strlen(const char *string)
{
	int length;

	for (length = 0; string[length] != '\0'; length++)
	{
	}
	return (length);
}






/**
 * *add_node - Adds a new node to the beginning of a linked list
 * @head: Pointer to a pointer to the head of the list
 * @str: The string to add to the beginning of the list
 * Return: The address of the new node, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node; /** Allocate memory for a new node */

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL) /* Check if allocation was successful */
	{
		return (NULL);
	}

	new_node->str = strdup(str);
	/** Duplicate the string and assign it to the node's str member */
	new_node->len = _strlen(str);
	/** Set the node's len member to the length of the string */
	new_node->next = *head;
	/** Set the node's next pointer to the current head of the list */
	*head = new_node;
	/** Set the head of the list to the new node */

	return (new_node); /** Return the address of the new node */
}
