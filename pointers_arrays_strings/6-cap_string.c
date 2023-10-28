#include "main.h"
/**
 * cap_string -  met en majuscule tous les mots d'une chaîne de caractères.
 *
 * Prototype: char *cap_string(char *);
 * Séparateurs de mots: espace, tabulation,
 * retour à la ligne, ,, ;, ., !, ?, \", (, ), { et }
 *
 * @str: la chaîne de caractères à traiter
 * @*str - Un pointeur vers une nouvelle
 * chaîne de caractères avec tous les mots en majuscule
 * return:  NULL si la chaîne d'entrée est NULL
 */

char *cap_string(char *str)
{
	int i;
	int j;

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0, j = 0; str[i] != '\0'; i++)
	{
		if (i == 0 || (str[i - 1] == ' ' || str[i - 1] == '\t'
			|| str[i - 1] == '\n' || str[i - 1] == ',' ||
			str[i - 1] == ';' || str[i - 1] == '.'
			|| str[i - 1] == '!' || str[i - 1] == '?' ||
			str[i - 1] == '"' || str[i - 1] == '('
			|| str[i - 1] == ')' || str[i - 1] == '{' ||
			str[i - 1] == '}'))
		{
			str[j++] = toupper(str[i]);
		}
		else
		{
			str[j++] = str[i];
		}
	}
	str[j] = '\0';
	return (str);
}
