#include <stdio.h>
#include "lists.h"
/**
 * print_listint - function print all node 
 * @h: header
 *
 * Return: retunn x
 */
size_t print_listint(const listint_t *h)
{
	size_t x = 0;

	while(h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		x++;
	}
	return (x);
}
