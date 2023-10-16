#include <stdio.h>

/**
 * main - print alphabet miniscule et majuscule
 * Description: using the main function
 * this program prints "Programming is positive, zero, or negative"
 * Return: 0
 */

int main(void)

{
	char caractere;

	for (caractere = 'a' ; caractere <= 'z' ; caractere++)
	{
	putchar(caractere);
	}
	for (caractere = 'A' ; caractere <= 'Z' ; caractere++)
	{
	putchar(caractere);
	}
	putchar('\n');
	return (0);
}
