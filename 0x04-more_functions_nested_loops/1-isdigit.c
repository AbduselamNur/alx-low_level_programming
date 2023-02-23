#include "main.h"

/**
 * _isdigit - print digit
 * @c: declare char
 * Return: return 1 and 0
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}

