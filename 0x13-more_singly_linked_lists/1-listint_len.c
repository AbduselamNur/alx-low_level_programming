#include <stdio.h>
#include "lists.h"
/**
 * listint_len - print the length
 * @h: header
 * Return: return x
 */
size_t listint_len(const listint_t *h)
{
	size_t x = 0;

	while (h != NULL)
	{
		h = h->next;
		x++;
	}
	return (x);
}
