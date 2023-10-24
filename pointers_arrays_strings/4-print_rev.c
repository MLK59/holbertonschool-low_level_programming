#include "main.h"

/**
 * print_rev -  Prints a string reverse
 * @str: The input string to be printed.
 */

void print_rev(char *str)
{
	int c;

	for (c = 0; str[c] != 0; c++)
	{

	}
		for (c = c - 1; c >= 0; c--)
		{
			_putchar(str[c]);
		}
	_putchar('\n');
}
