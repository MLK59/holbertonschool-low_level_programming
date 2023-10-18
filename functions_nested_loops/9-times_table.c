#include "main.h"

/**
 * times_table - imprime la table de multiplication de 0 à 9
 * Description: utilise la fonction times_table
 */

void times_table(void)
{
	int c;
	int b;
	int d;

	for (b = 0; b <= 9; b++)
	{
		for (c = 0; c <= 9; c++)
		{
		d = b * c;
			if (d >= 10)
			{
			_putchar((d / 10) + '0');
			_putchar((d % 10) + '0');
			 }
			else
				{
				_putchar(d + '0');
				_putchar(' ');
				}
			if (c != 9)
				{
				_putchar(',');
				_putchar(' ');
				}
				else
					{
					_putchar('\n');
					}
		}
						        
	}
}

