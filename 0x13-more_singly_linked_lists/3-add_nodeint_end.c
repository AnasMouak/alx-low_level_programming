#include "lists.h"

/**
 * add_nodeint_end - a function that adds a new node
 *            at the end of the node
 *
 * @head: pointer to the first node of the list
 * @n: element int to add to new node
 * Return: address of the new element or NULL if it fails
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	struct listint_s *t, *p;

	t = malloc(sizeof(struct listint_s));
	if (t == 0)
	{
		return (0);
	}
	t->n = n;
	t->next = 0;

	if (*head == 0)
	{
		*head = t;
	}
	else
	{
		p = *head;
		while (p->next != 0)
		{
			p = p->next;
		}
		p->next = t;
	}
	return (t);
}

