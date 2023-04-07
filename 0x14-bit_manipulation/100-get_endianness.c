#include "main.h"
/**
 * get_endianness - a function that checks the endianness.
 * Return: return 0
 */
int get_endianness(void)
{
	int x = 1;
	char *pointer = (char *)&x;

	if (*pointer == 1)
		return (1);
	else
		return (0);
}
