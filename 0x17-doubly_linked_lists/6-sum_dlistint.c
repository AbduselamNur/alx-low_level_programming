#include "lists.h"
/**
 * sum_dlistint - func that sum All lists
 * @head: heading
 * Return: return sum
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *new = head;
	int sum = 0;

	while (new != NULL)
	{
		sum += new->n;
		new = new->next;
	}
	return (sum);
}
