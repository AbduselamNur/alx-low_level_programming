
#include <stdio.h>

/**
 * main - print alphabate
 *
 * Description: print alphabate exapt e and q
 * Return: return zero
 */

int main(void) 
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
	{
		if (x == 'e' || x == 'q')
			continue;
		putchar(x);
	}
	putchar('\n');
	return (0);
}
