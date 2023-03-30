#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - Add new node to a linked list.
 * @head: head of the linked list.
 * @str: string to add.
 *
 *
 * Return: pointer of the new element added to linked list.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *x;

	x = malloc(sizeof(list_t));
	if (!x)
	return (NULL);
	x->str = strdup(str);
	x->len = _strlen(str);
	x->next = *head;
	*head = x;
	return (x);
}

/**
 * _strlen - Calculate lenght of a string.
 * @s: string.
 *
 * Return: lenght of the string s.
 */

int _strlen(const char *s)
{
	int idx = 0;

	for (; s[idx]; idx++)
	;
	return (idx);
}
