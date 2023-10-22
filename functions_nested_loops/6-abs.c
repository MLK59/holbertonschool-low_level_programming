#include "main.h"
#include <stdio.h>
/**
 * _abs - Computes the absolute value of an integer.
 * @c: The integer for which the absolute value is calculated.
 *
 * Return: The absolute value of the integer @c.
 */
int _abs(int c)
{
		if (c > 0 || c == 0)
		{
			return (c);
		}
		else
		return (c * -1);
}
