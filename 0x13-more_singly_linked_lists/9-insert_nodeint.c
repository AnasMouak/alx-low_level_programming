#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node
 * at a given position.
 * @head: head of a list.
 * @idx: index of the list where the new node is
 * added.
 * @n: integer element.
 *
 * Return: the address of the new node, or NULL if it
 * failed.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *p, *t;
	unsigned int i;

	p = *head;
	t = malloc(sizeof(listint_t));
	if (t == 0)
	{
		return (0);
	}
	t->n = n;
	if (idx == 0)
	{
		t->next = *head;
		*head = t;
		return (t);
	}
	i = 0;
	while (*head != 0 && i < idx - 1)
	{
		p = p->next;
		i++;
	}
	if (p == 0)
	{
		free(t);
		return (0);
	}

	t->next = p->next;
	p->next = t;

	return (t);
}
