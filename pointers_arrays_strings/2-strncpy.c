#include "main.h"

/**
 * _strncpy - fonction qui copie une chaîne de caractères.
 * @src: parameter to a src to copy
 * @dest: parameter for dest
 * @n: nombre maximum de caractères à copier depuis src
 * Return: dest.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int a;

	for (a = 0; a < n && src[a] != 0; a++)
	{
		dest[a] = src[a];

	}
	for (;a < n; a++)
	{
	dest[a] = 0;
	}
	return (dest);
}
