#include "main.h"

/**
 * _puts - Prints a string
 * @str: The input string to be printed.
 */

void _puts(char *str)
{
	int c;

	for (c = 0; str[c] != 0; c++)
	{
		_putchar(str[c]);
	}
	_putchar('\n');
}
