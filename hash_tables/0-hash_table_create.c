#include "hash_tables.h"  /** containing the hash table structure */
#include <stdlib.h>  /** for dynamic memory allocation */
#include <string.h>  /** for memory manipulation */

/**
 * hash_table_create - creates a hash table with a given size
 * @brief Creates a new hash table
 * @size: The size of the hash table
 * Return: Pointer to the newly created hash table
 * or NULL if memory allocation fails
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
/** Allocate memory for the hash table structure */
	hash_table_t *new_hash_table = (hash_table_t *)malloc(sizeof(hash_table_t));
/** Check if memory allocation was successful */
	if (new_hash_table == NULL)
	{
/** Memory allocation failed, return NULL */
	return (NULL);
	}

/** Initialize the hash table size */
	new_hash_table->size = size;

/** Allocate memory for the array of pointers to hash nodes */
	new_hash_table->array = (hash_node_t **)malloc(sizeof(hash_node_t *) * size);
/** Check if memory allocation for the array was successful */


	if (new_hash_table->array == NULL)
	{
	free(new_hash_table);
	return (NULL);
	}

/** Initialize all elements of the array to NULL, indicating no nodes yet */
	for (i = 0; i < size; i++)
	{
	new_hash_table->array[i] = NULL;
	}

/** Return the pointer to the newly created hash table structure */
return (new_hash_table);
}
