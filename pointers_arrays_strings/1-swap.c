#include "main.h"
/**
 * swap_int - check the code.
 * @a: declaration of a and paramters
 * @b: declaration of b and paramters
 * Return: 0.
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
