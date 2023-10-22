#include <stdio.h>

 /**
 * main - printing numbers from 0-9
 * Description: using the main function
 * @c: the int for the paramaters of my function
 * Return: 0
 */

	int main(void)

	{
	char c;

	for (c = '0' ; c <= '9' ; c++)
	{
	putchar(c);
		}
	putchar('\n');
	return (0);
	}
