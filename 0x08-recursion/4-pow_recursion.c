#include "main.h"
/**
 * _pow_recursion - function of power
 * @x: subscript
 * @y: superscript
 * Return: retutn sucessfully
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
