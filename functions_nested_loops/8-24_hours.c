#include "main.h"

/**
 * jack_bauer - function that prints every minute of the day of Jack Bauer,
 * starting from 00:00 to 23:59
 */

void jack_bauer(void)
{
	int hours = 0;
	int minutes = 0;

	while (hours <= 23)
	{
		while (minutes <= 59)
		{
			int hours_tens = hours / 10;
			int hours_ones = hours % 10;
			int minutes_tens = minutes / 10;
			int minutes_ones = minutes % 10;

			_putchar(hours_tens + '0');
			_putchar(hours_ones + '0');
			_putchar(':');
			_putchar(minutes_tens + '0');
			_putchar(minutes_ones + '0');
			_putchar('\n');

			minutes++;
		}
	hours++;
	minutes = 0;
	}
}
