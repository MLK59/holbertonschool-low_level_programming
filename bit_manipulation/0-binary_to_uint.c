#include "main.h"
#include <string.h>

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to a string of 0 and 1 chars
 * Return: unsigned int
 */

unsigned int binary_to_uint(const char *b)
{
	int bin_max_idx = 0;
	int multiplier = 1;
	unsigned int converted_int = 0;

	if (!b)
		return (0);

	/**
	 * Détermine l'indice du dernier caractère du string b.
	 */

	int bin_max_idx = strlen(b) - 1;

	/**
	 * Parcour le string b de la droite vers la gauche.
	 */

	while (bin_max_idx >= 0)
	{
		/**
		 * Vérifie que le caractère actuel est '0' ou '1'.
		 * Si ce n'est pas le cas, la fonction retourne 0.
		 */

		if (b[bin_max_idx] != '0' && b[bin_max_idx] != '1')
			return (0);

		/**
		 * Ajoute le caractère actuel à la conversion,
		 * multiplié par la puissance de 2 correspondante.
		 */

		converted_int += multiplier * (b[bin_max_idx] - '0');
		multiplier <<= 1;
		bin_max_idx--;
	}

	return (converted_int);
}
