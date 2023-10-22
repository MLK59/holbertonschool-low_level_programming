#include <stdio.h>

/**
 * main - Entry point, prints numbers from 0 to 9
 *
 * Description:
 * Prints numbers from 0 to 9 separated by commas and spaces.
 *
 * Return: Always 0 (Success)
 */

int main(void)

{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
		if (i != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
