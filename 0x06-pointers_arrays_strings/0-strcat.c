#include "main.h"

/**
 *_strcat - Write a function that concatenates two strings.
 *
 *@dest: This is the output dest
 *@src: This is the input source
 *
 * Return: This return to dest, that concatenates two strings
 */

char *_strcat(char *dest, char *src)
{
	int x, i;

	for (x = 0; dest[x] != '\0'; x++)
		;
	for (i = 0; src[i] != '\0'; i++)
	{
		dest[x] = src[i];
		x++;
	}
	return (dest);
}
