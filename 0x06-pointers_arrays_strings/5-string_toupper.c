#include "main.h"
/**
 *string_toupper - changes all lowercase letters of a string to uppercase.
 *@c: pointer variable
 *
 *Return: return pointer
 */
char *string_toupper(char *c)
{
	int l;

	l = 0;
	while (c[l] != '\0')
	{
		if (c[l] >= 97 && c[1] <= 122)
		{
			c[l] = c[l] - 32;
		}
		l++;
	}
	return (c);
}
