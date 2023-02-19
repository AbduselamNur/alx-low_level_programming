#include <stdio.h>

/**
 * main - void fun
 *
 * Description: print reverse alphabat
 *
 * Return: retern zero
 */

int main(void)
{
	char alp;

	for (alp = 'z'; alp >= 'a'; alp--)
		putchar(alp);
	putchar('\n');
	return (0);
}
