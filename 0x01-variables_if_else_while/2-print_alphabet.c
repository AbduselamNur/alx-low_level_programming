#include <stdio.h>

/**
 * main- print alphabet
 *
 * Description: this code is display alphabate
 * Return: return 0
 */

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
