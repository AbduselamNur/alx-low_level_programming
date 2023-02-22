#include "main.h"

/**
 * _isalpha - print only alphabate if alphabate is correct return 1 else 0
 * @c: declare Char
 *
 * Return: return 1 for alphabate else 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
	return (1);
	}
	else 
	{
		return (0);
	}
}

