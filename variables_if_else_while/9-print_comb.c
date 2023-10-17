#include <stdio.h>

 /**
  * main - printing numbers from 0-9 with ,  and space between them
  * Description: using the main function
  * Program prints "0, 1, 2, 3, 4, 5, 6, 7, 8, 9"
  * Return: 0
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
