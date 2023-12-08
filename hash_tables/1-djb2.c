#include "hash_tables.h"

/**
 * hash_djb2 - Hash function implementing the djb2 algorithm.
 * @str: The string to hash.
 *
 * Return: The calculated hash.
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;
/** Initialize the hash value to the magic constant 5381 */
	hash = 5381;
	while ((c = *str++))
    /** Calculate the new hash value using the djb2 algorithm */
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
/** Return the calculated hash value */
	return (hash);
}
