#include "main.h"

/**
 * _puts - Prints a string
 * @str: The input string to be printed.
 */
void _puts(char *str)
{
	int c = 0;

	while (str[c] != '\0')
	{
		_putchar(str[c]);
		str++;
	}

	_putchar('\n');
}
