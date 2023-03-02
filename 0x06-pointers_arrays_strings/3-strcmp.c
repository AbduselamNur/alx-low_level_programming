#include "main.h"
/**
 * _strcmp - Write a function that compares two strings.
 *
 * @s1: variable
 * @s2: variable
 *
 * Return: If the strings are equals return "0", if not return other number
 */

int _strcmp(char *s1, char *s2)
{
	int counter, cmpVal;

	counter = 0;
	while (s1[counter] == s2[counter] && s1[counter] != '\0')
	{
		counter++;
	}

	cmpVal = s1[counter] - s2[counter];
	return (cmpVal);
}
