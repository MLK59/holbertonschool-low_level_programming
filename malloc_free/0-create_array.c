#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - creates an array of chars and initializes
 * @c: string charachter
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *montabl;

	if (size == 0)
	{
		return (NULL);
	}
	montabl = malloc(size * sizeof(c));

	if (montabl == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
		montabl[i] = c;

	return (montabl);
}
