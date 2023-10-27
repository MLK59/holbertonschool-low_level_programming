#include "main.h"
/**
 * reverse_array - inverse l'ordre des éléments d'un tableau d'entiers.
 * @a: un tableau d'entiers
 * @n: le nombre d'éléments dans le tableau
 * Return: 0
 */

void reverse_array(int *a, int n)
{
	int debut = 0;
	int fin = (n - 1);
	int b;

	while (debut < fin)
	{
		b = a[debut];
		a[debut] = a[fin];
		a[fin] = b;

		debut++;
		fin--;
	}
}
