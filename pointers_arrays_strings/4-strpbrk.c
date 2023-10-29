#include "main.h"
/**
 * _strpbrk -  function that searches a string for any of a set of bytes
 * @s: Pointeur vers la chaîne dans laquelle chercher
 * @accept: Pointeur vers la chaîne contenant les caractères à rechercher
 * Return: a pointer to the byte in s that matches one of the bytes in accept,
 * or NULL if no such byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		char *temp = accept;

		while (*temp != '\0')
		{
			if (*s == *temp)
			{
				return (s);
			}
		temp++;
		}
	s++;
	}
	return (NULL);
}
