#include "lists.h"
/**
 * print_dlistint - funtion that print All Dlists
 * @h: header
 * Return: return count
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
			h = h->next;
			count++;
	}
	return (count);
}
