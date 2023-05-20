#include "lists.h"
/**
 * get_dnodeint_at_index - funtion gives lists by index
 * @head: header
 * @index: index of value that return
 *
 * Return: return new
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *new = head;
	unsigned int i = 0;

	while (new != NULL && i < index)
	{
		new = new->next;
		i++;
	}
	if (new == NULL)
		return (NULL);
	else
		return (new);
}
