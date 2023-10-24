#include "main.h"
#include <unistd.h>
/**
 * print_rev -  Prints a string reverse
 * @str: The input string to be printed.
 */
void _putchar (char c)
{
}
void print_rev(char *s)
{
	int c;

	for (c = 0; s[c] != 0; c++)
	{
	}
		for (c = c - 1; c >= 0; c--)
			_putchar(s[c]);
	_putchar('\n');
}
