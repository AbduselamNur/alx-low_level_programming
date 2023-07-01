#include "hash_tables.h"

/**
 * hash_djb2 - implement the djb2 algorithm
 * @str: string
 * Return: hah
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hsh;
	int x;

	hsh = 5381;
	while ((x = *str++))
		hsh = ((hsh << 5) + hsh) + x;
	
	return (hsh);
}
