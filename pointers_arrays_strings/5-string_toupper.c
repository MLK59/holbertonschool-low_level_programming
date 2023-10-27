#include "main.h"
/**
 * string_toupper - fonction convertit une chaîne de caractères en maj.
 * Elle prend en entrée un pointeur vers une chaîne de caractères
 * et modifie directement la chaîne d'origine.
 * Les caractères non alphabétiques restent inchangés.
 *
 * @str - Le pointeur vers la chaîne /de caractères à convertir
 * @return - chaine de caractere modifiée
 */

char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}

