#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table.
 * @ht: A pointer to the hash table to print.
 *
 * Description: Key/value pairs are printed in the order
 *         they appear in the array of the hash table.
 *
 * Vérifie si la table de hachage est NULL.
 * Si oui, elle retourne.
 */
void hash_table_print(const hash_table_t *ht)
{	
  /**
   * Initialise un drapeau virgule pour suivre 
   * si plusieurs éléments doivent être imprimés.
   */
	unsigned char comma_flag = 0;
	unsigned long int i;
  /**
   * Imprime '{'.
   */
  printf("{");

  /**
   * Itère sur le tableau de la table de hachage.
   */
  for (i = 0; i < ht->size; i++)
  {
	if (ht->array[i] != NULL) {
	  /**
	   * Vérifie si le drapeau virgule est défini sur 1.
	   */
	  if (comma_flag == 1)
	  {

		printf(", ");
	  }

	  /**
	   * Initialise un pointeur de nœud pour pointer 
	   * sur le premier nœud dans l'index actuel.
	   */
	  hash_node_t *node = ht->array[i];

	  /**
	   * Imprime les paires clé/valeur.
	   */
	  while (node != NULL) {
		/**
		 * Imprime la clé du nœud.
		 */
		printf("'%s': '%s'", node->key, node->value);

		/**
		 * Déplace le pointeur de nœud vers le nœud suivant.
		 */
		node = node->next;

		if (node != NULL)
		{
		  printf(", ");
		}
	  }

	  /**
	   * Met le drapeau virgule à 1.
	   */
	  comma_flag = 1;
	}
  }
  printf("}\n");
}
