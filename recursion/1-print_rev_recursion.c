#include "main.h"

/**
 * _print_rev_recursion -  function that prints a string reverse
 * @s: parameter of function, une chaine de caractere de type char
 * Return: Always 0.
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		putchar('\n');
		return;
	}
	putchar(*s);
	_print_rev_recursion(s + 1);
	putchar(*s);
}
