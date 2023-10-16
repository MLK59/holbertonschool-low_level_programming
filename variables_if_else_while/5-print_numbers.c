#include <stdio.h>

/**
 * main - print 0 a 9*
 * Description: using the main function
 * prints all single digit numbers of base 10 starting from 0
 * Return: 0
 */

int main(void)
{
	int x;

	for (x = 0; x < 10; x++)
	{
		printf("%x", x);
	}
	printf("\n");
	return (0);
}
