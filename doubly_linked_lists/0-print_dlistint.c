#include "lists.h"

/**
 * print_dlistint - prints all the elements of a list
 * @h: struct
 * Return: int
 */

size_t print_dlistint(const dlistint_t *h)
{
	int index = 0;

	/* Iterate through the list, printing each element */
	while (h)
	{
		/* Print the element's data */
		printf("%d\n", h->n);

		/* Increment the index */
		index++;

		/* Move to the next element */
		h = h->next;
	}

	/* Return the number of elements */
	return (index);
}
