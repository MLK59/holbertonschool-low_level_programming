#include <stdio.h>
#include "main.h"
/**
 * rev_string - function that reverses a string.
 * @s: declaration of *s and paramters for the function
 * Return: Always 0.
 */
void rev_string(char *s)
{
	int c;
	int rs;
	char lettre;

	for (c = '\0'; s[c] != 0; c++)
	{
	}
	rs = 0;
	for (c = c - 1; rs < c; rs++)
	{

		lettre = s[c];
		s[c] = s[rs];
		s[rs] = lettre;
		c--;
		}
}

