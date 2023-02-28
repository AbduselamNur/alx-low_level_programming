#include "main.h"

/**
 * print_rev - functions
 * @s: variable
 */
void print_rev(char *s)
{
	int x = 0;

	while (*s != '\0')
	{
		*s++;
		x++
	}
	while (x > 0)
	{
		*s--;
		_putchar(*s);
	}
	_putchar('\n');
}
