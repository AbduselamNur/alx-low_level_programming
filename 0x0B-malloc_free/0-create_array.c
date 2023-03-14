#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - function that creates an array of chars,
 * @size: positive integer
 * @c: charactor
 *
 * Return: NULL if size = 0,  a pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int x;
	char *y;

	y = char *malloc(size * sizeof(char))
		if (y == 0)
			return ("NULL");
	for (x = 0; x < size; x++)
	{
		y[x] = c;
	}
	return (y);
}
