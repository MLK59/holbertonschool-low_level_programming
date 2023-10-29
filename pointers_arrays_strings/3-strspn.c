#include "main.h"
#include <stdio.h>

/**
 * _strspn - gets the length of a prefix substring.
 * @s: the string to search
 * @accept: the characters to compare against
 * Return: the number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	unsigned int i, j;
	int found;

	for (i = 0; s[i] != '\0'; i++)
	{
		found = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				found = 1;
				break;
			}
		}
		if (found == 0)
		{
		break;
		}
	count++;
	}
	return (count);
}

