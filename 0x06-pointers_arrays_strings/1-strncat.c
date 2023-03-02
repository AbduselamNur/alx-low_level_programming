#include "main.h"

/**
 * _strncat - functions
 * @dest: variable
 * @src: variable
 * @n: variable
 * Return: return dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int x, y;

	for (x = 0; dest[x] != '\0'; x++)
		;
	for (y = 0; y < n && src[y] != '\0'; y++)
	{
		dest[x] = src[y];
		y++;
	}
	if (y < n)
	{
		dest[x] = '\0';
	}
	return (dest);
}
