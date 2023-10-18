#include <stdio.h>
#include "main.h"

/**
 * main - printing numbers from 0-9 with ,  and space between them
 * Description: using the main function
 * this program prints "0, 1, 2, 3, 4, 5, 6, 7, 8, 9"
 * Return: 0
 */

void times_table(void)	/* table de multi */
{
	int c;
	int b;
	int d;

	for (b = 0 ; b <= 9 ; b++)
	{
		for (c = 0 ; c <= 9 ; c++)
		{
			d = b * c;
			if (c != 9)
				{
				_putchar((d / 10) + '0');
				_putchar((d % 10) + '0');
				_putchar(',');
				_putchar(' ');
				}
		}
	printf("$\n");
	}
	return ();
}
