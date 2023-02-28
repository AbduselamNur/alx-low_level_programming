#include "main.h"

/**
 * _strlen - main function
 * @s: variable
 * Return: return the length of string
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		s++;
		i++;
	}
	return (i);
}

