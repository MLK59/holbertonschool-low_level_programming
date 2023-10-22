#include "main.h"
/**
 * main - program that prints the numbers from 1 to 100,
 * multiples of 3 print Fizz,
 * the multiples of 5 print Buzz and 3 & 5 FizzBuzz
 *
 * Return: 0
 *
 */

int main(void)
{
	int t = 1;

	while (t <= 100)
	{
		if (t % 3 == 0 && t % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (t % 5 == 0)
			{
			if (t == 100)
			{
				printf("Buzz");
			}
			else
			{
				printf("Buzz ");
			}
			}
		else if (t % 3 == 0)
		{
			printf("Fizz ");
		}
		else
		{
		printf("%d ", t);
		}
		t++;
		}
	printf("\n");
	return (0);
}
