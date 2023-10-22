#include <stdio.h>

/**
 * main - Entry point, prints numbers from 0 to 9
 * Description: Uses the main function to print numbers
 * from 0 to 9 followed by a new line.
 * Return: Always 0 (success)
 */
	int main(void)

	{
	int c;

	for (c = '0' ; c <= '9' ; c++)
	{
	putchar(c);
		}
	putchar('\n');
	return (0);
	}
