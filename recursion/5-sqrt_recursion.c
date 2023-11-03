#include "main.h"
#ifndef MAIN_H
#define MAIN_H

/**
* _sqrt_recursion - Calcule la racine carrée d'un nbre de manière récursive.
* @n: Le nombre dont la racine carrée doit être calculée.
*
* Description : Cette fonction utilise la récursion pour calculer la racine
* carrée naturelle d'un nbre donné en appelant la fonction racine.
* Si le nombre n'est pas un carré parfait, la fonction retourne -1.
*
* Return: La racine carrée naturelle de n, -1 si n pas un carré parfait.
*
*/
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	else if (n < 0)
		return (-1);
	else
		return (racine(n, 1));
}

/**
 * racine - calculer la racine carrée d'un nombre.
 * @n: Le nombre dont la racine carrée doit être calculée.
 * @i: L'entier utilisé pour les essais successifs.
 * Return: i or -1
 */

int racine(int n, int i)
{
	if (n == (i * i))
	{
		return (i);
	}
	else if (i * i > n)
	{
		return (-1);
	}
	else
	{
		return (racine(n, i + 1));
	}
}
