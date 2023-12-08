#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 *
 * @ht: pointer to the hash table
 * @key: key of the hash
 * Return: value of the hash.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	/** ndex of the bucket where the key should be stored */
	unsigned long int k_index;
	/** Pointer to traverse the linked list in the corresponding bucket */
	hash_node_t *tmp;

	if (ht == NULL)
		return (NULL);

	if (key == NULL || *key == '\0')
		return (NULL);
	/** Calculate the hash index of the key */
	k_index = key_index((unsigned char *)key, ht->size);
	/**
	 * Set the tmp pointer to the first node
	 * in the linked list at the calculated hash index
	 */
	tmp = ht->array[k_index];
	/** Iterate through the linked list in the corresponding bucket*/
	while (tmp != NULL)
	{	/** Compare the current node's key with the given key*/
		if (strcmp(tmp->key, key) == 0)
			/** If the keys are equal, return the value of the current node*/
			return (tmp->value);
		/**Otherwise, move to the next node in the linked list*/
		tmp = tmp->next;
	}
	/**
	 * If the end of the linked list is reached,
	 * the key was not found, so return NULLs
	 */
	return (NULL);
}

