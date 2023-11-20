#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index
 * of a linked list.
 * @head: head of a list.
 * @index: index of the list where the node is
 * deleted.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *p, *t;
	unsigned int i;

	p = *head;
	t = *head;

	if (*head == 0)
	{
		return (-1);
	}

	if (index == 0)
	{
		(*head) = (*head)->next;
		free(t);
		return (1);
	}

	i = 0;
	while (t != 0 && i < index)
	{
		p = t;
		t = t->next;
		i++;
	}
	if (t == 0)
	{
		return (-1);
	}

	p->next = t->next;
	free(t);
	t = 0;

	return (1);
}
