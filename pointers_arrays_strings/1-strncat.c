#include "main.h"

/**
* _strncat - fonction qui concatène deux chaînes de caractères.
* @dest: chaîne de destination
* @src: chaîne source
* @n: nombre maximum de caractères à concaténer depuis src
* Return: pointeur vers la chaîne de destination
*/
char *_strncat(char *dest, char *src, int n)
{
	int dest_l = 0;
	int i;

	while (dest[dest_l] != '\0')
	{
		dest_l++;
	}
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[dest_l + i] = src[i];
	}
	dest[dest_l + i] = '\0';
	return (dest);
}
