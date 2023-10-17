#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase
 *
 * Description: using the main function
 * Prints all the numbers of base 16 in lowercase
 * Return: 0
 */

int main(void)
{
	char c;

	for (c = 48 ; c <= 57 ; c++)
	{
		putchar(c);
	}
	for (c = 'a'; c <= 'f'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
