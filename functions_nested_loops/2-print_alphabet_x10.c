#include "main.h"
#include <unistd.h>
/**
 * print_alphabet_x10 - Prints the alphabet in lowercase 10 times
 *
 * Description:
 * This function prints the lowercase alphabet from 'a' to 'z' followed by
 * a new line character. It repeats this pattern 10 times.
 *
 * Return: void (no return value)
 */
void print_alphabet_x10(void)

{
	char c;
	int i;

	for (i = 0; i <= 9; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
		_putchar(c);
		}
		_putchar('\n');
	}
}
