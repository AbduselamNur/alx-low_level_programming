#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_nodeint - add to element
 * @head: poniter to pointer
 * @n: intiger
 *
 * Return: return head
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *x;

	x = malloc(sizeof(listint_t));

	if (x == NULL)
	{
		return (NULL);
	}

	x->n = n;
	x->next = *head;
	*head = x;

	return (*head);
}
