#include "hash_tables.h"
/**
 * hash_djb2 - function that impliment the djb2 hash
 * function alogorithm
 * @str: pointer as an input
 * Return: unsigned int log of hash
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int h = 5381;
	int c;

	while ((c = *str++) != '\0')
	{
		h = (h * 32) + c;
	}
	return (h);
}
