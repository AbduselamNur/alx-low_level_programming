#include "main.h"

/**
 * _puts - functions name
 * @str: variable
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
