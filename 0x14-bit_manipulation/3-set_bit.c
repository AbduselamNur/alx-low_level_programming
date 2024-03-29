#include "main.h"
/**
 * set_bit - function thst set  the value of a bit to 1 at a given index
 * @n: Pointer of Number
 * @index: Count thr Number
 * Return: 1, -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	*n |= (1UL << index);
	return (1);
}
