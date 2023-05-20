#include "lists.h"
/**
 * free_dlistint - free the list
 * @head: header
 */
void free_dlistint(dlistint_t *head)
{
dlistint_t *cur = head;

while (cur != NULL)
{
dlistint_t *next = cur->next;

free(cur);
cur = next;
}
}
