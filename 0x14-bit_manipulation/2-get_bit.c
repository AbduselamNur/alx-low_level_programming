#include "main.h"
/**
 * get_bit - functions that get by bit
 * @n: The number
 * @index: count that you want
 *
 * Return: return (n >> index) & 1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	return ((n >> index) & 1);
}
