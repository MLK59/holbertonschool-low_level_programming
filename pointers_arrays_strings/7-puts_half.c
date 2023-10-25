#include "main.h"
/**
 * puts_half - function that prints half of a string, followed by a new line.
 * @str: declaration and paramters for the function
 * Return: 0
 */

void puts_half(char *str)
{
	int c = 0;
	int f;

	while (str[c] != '\0')
	{
		c++;
	}
		for (f = (c + 1) / 2; f < c; f++)
		{
			putchar(str[f]);
		}
		putchar('\n');
}
