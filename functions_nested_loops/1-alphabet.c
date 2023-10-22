#include "main.h"
#include <unistd.h>

/**
 * print_alphabet - Prints the lowercase alphabet followed by a new line
 *
 * Description:
 * This function prints the lowercase alphabet from 'a' to 'z' followed by
 * a new line character.
 *
 * Return: void (no return value)
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
	_putchar(c);
	}
	_putchar('\n');
}
