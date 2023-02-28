#include "main.h"

/**
 * swap_int - main
 * @a: variable
 * @b: variable
 */
void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
