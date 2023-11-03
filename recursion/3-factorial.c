#include "main.h"
/**
 * factorial - Calcule le factoriel d'un nombre entier.
 * @n: Le nombre dont le factoriel doit être calculé.
 * Return: Le factoriel de n si n est positif ou zéro,
 *		-1 si n est négatif (erreur).
 */
int factorial(int n)
{
	if ((n == 0) | (n == 1))
	{
		return (1);
	}
	else if (n > 1)
	{
		int resultat = factorial(n - 1);

		return (n * resultat);
	}
	return (-1);

}
