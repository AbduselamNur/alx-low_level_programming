#include "hash_tables.h"
/**
 * key_index - A function that give the index
 * @key: is the key
 * @size: the size of array
 * Return:  index at which the key/value pair
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int ht = hash_djb2(key);

	return (ht % size);
}
