#include "main.h"

/**
 * rev_string - function
 * @s: variable
 */
void rev_string(char *s)
{
	char x = s[0];
	int y = 0;
	int i;

	while (s[y] !=  '\0')
		y++;
	for (i = 0; i < y; i++)
	{
		y--;
		x = s[i];
		s[i] = s[x];
		s[y] = x;
	}
}
