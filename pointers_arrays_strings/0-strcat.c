#include "main.h"
/**
 * _strcat -  fonction qui concatène deux chaînes de caractères.
 * @src: chaîne source
 * @dest: chaîne de destination
 * Return: pointeur vers la chaîne de destination.**
 */
char *_strcat(char *dest, char *src)
{
	int a = 0;
	int b = 0;

	while (dest[a] != '\0')
		a++;
	while (src[b] != '\0')
	{
		dest[a] = src[b];
		b++;
		a++;
	}
	dest[a] = '\0';
	return (dest);
}
