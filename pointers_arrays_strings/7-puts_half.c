#include "main.h"
/**
 * puts_half - function that prints half of a string, followed by a new line.
 * @str: declaration of n and paramters for the function
 * Return: 0
 */

void puts_half(char *str)
{
	int c;
	int f;

	for (c = 0; str[c] != 0; c++)
	{
	}
		for (f = c / 2; str[f] != 0; f++)
		{
			putchar(str[f]);
		}
		putchar('\n');
}
