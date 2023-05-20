#include "lists.h"

/**
 * delete_dnodeint_at_index - Detete node at index
 *
 * @head: head
 * @index: index that delete
 * Return: 1 and -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;
	dlistint_t *h2;
	unsigned int i = 0;

	if (temp != NULL)
		while (temp->prev != NULL)
			temp = temp->prev;

	while (temp != NULL)
	{
		if (i == index)
		{
			if (i == 0)
			{
				*head = temp->next;
				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				h2->next = temp->next;

				if (temp->next != NULL)
					temp->next->prev = h2;
			}

			free(temp);
			return (1);
		}
		h2 = temp;
		temp = temp->next;
		i++;
	}

	return (-1);
}
