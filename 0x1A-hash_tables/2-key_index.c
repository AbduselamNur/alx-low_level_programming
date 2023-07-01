#include "hash_tables.h"

/**
 * key_index - index of a key
 * @key: key of key or value pair
 * @size: size of array
 * Return: thing of key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
