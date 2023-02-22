#include "main.h"

/**
 * print_sign - print Number and sign
 * @n: The charactor that check
 * Return: return 0 and 1
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar ('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar ('0');
		return (0);
	}
	else
	{
		_putchar ('-');
		return (-1);
	}
}
