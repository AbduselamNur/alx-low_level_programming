#include "main.h"

/**
 * _islower - check lower 
 * @c: char that display
 * Return: 1 and 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

