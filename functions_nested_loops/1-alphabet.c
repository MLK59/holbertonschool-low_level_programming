#include "main.h"
#include <unistd.h>

/*
 * main - prints the alphabet, in lowercase
 * description : print a-z
 * print_alphabet() - Prints the lowercase alphabet followed by a new line.
 * Return: On success 1.
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
