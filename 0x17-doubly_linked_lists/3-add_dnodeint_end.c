#include "lists.h"
/**
 * add_dnodeint_end - Add Node At the End
 * @head: Header
 * @n: Data
 *
 * Return: return temp
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp = malloc(sizeof(dlistint_t));

	if (temp == NULL)
		return (NULL);
	temp->n = n;
	temp->prev = NULL;
	temp->next = NULL;

	if (*head == NULL)
		*head = temp;
	else
	{
		dlistint_t *tail = *head;

		while (tail->next != NULL)
			tail = tail->next;
	tail->next = temp;
	temp->prev = tail;
	}
	return (temp);
}
