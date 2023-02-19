#include <stdio.h>

/**
 * main - void main
 *
 * Description: print No number separeated by comma
 *
 * Return: return zero
 */

int main(void)
{
	int x;

	for (x = '0'; x <= '9'; x++)
	{
		putchar(x);
		{
			if (x != '9')
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
