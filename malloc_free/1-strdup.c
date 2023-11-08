#include <stdio.h>
#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * _strdup - duplicates a string using malloc
 * @str: the input string to duplicate
 *
 * Return: a pointer to the duplicated string, or NULL if it fails
 */
char *_strdup(char *str)
{
	char *duplicate;
	unsigned int i;
	unsigned int length;

	if (str == NULL)
	{
		return (NULL);
	}
	length = strlen(str);
	duplicate = malloc((length + 1) * sizeof(char));
	if (duplicate == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < length; i++)
	{
		duplicate[i] = str[i];
	}
	duplicate[length] = '\0';
	return (duplicate);
	free(duplicate);
}
