#include "main.h"
#include <stdio.h>

/**
 * _strstr - Locates a substring within a string.
 * @haystack: The string to be searched.
 * @needle: The substring to be located.
 * Return: A pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *temporaire_haystack = haystack;
		char *temporaire_needle = needle;

		while (*temporaire_needle != '\0' && *temporaire_haystack == *temporaire_needle)
		{
			temporaire_haystack++;
			temporaire_needle++;
		}
		if (*temporaire_needle == '\0')
		{
			return (haystack);
		}
	haystack++;
	}
	return (NULL);
}
