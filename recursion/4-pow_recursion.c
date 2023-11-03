#include "main.h"
/**
 * _pow_recursion - Calcule la puissance d'un nombre.
 * @x: Le nombre de base.
 * @y: L'exposant.
 * Return: La valeur de x élevé à la puissance y.
 *	-1 si y est négatif.
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else if (y == 1)
	{
		return (x);
	}
	else
	{
		int resultat = _pow_recursion(x, (y - 1));

		return (x * resultat);
	}
}
