#include "lists.h"
/**
 * dlistint_len - print the length of Dlists
 * @h: header
 * Return: return count
 */
size_t dlistint_len(const dlistint_t *h)
{
size_t count = 0;
while (h != NULL)
{
count++;
h = h->next;
}
return (count);
}
/**
 * insert_dnodeint_at_index - funt inser node at given index
 * @h: head
 * @idx: index position
 *
 * @n: data
 * Return: return
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *new_node, *current_node;
unsigned int i;

if (idx > dlistint_len(*h))
return (NULL);
new_node = malloc(sizeof(dlistint_t));

if (new_node == NULL)
return (NULL);

new_node->n = n;
new_node->next = NULL;
new_node->prev = NULL;

current_node = *h;
for (i = 0; i < (idx - 1); i++)
{
current_node = current_node->next;
}

new_node->next = current_node->next;
new_node->prev = current_node;
current_node->next->prev = new_node;
current_node->next = new_node;

return (new_node);
}
