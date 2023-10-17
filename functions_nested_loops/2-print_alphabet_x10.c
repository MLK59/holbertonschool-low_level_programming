#include "main.h"
#include <unistd.h>

/*
 * main - prints the alphabet, in lowercase
 * description : print a-z
 * print_alphabet_x10 - function to print abc 10 times
 * Return: 0.
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
