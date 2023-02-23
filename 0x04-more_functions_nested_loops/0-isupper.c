#include "main.h"

/**
 * _isupper - check upper case charactor
 * @c: declare char
 * Return: return 0 And 1
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
