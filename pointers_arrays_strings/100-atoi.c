#include "main.h"
/**
* _atoi - Convertire une chaîne de caractères en entier.
* @s: La chaîne de caractères à convertir.
* Return: La valeur entière convertie.
*/
int _atoi(char *s)
{
	int resultat = 0;
	int posneg = 1;

	while (*s)
	{
		if (*s >= '0' && *s <= '9')
		{
			resultat = resultat * 10 + (*s - '0');
		}
		else if (*s == '-' && resultat == 0)  
		{
			posneg = -1;
		}
		else if (*s == '+')  
		{
		}
		else
		{
			break;
		}
		s++;
	}
	return posneg * resultat;
}
