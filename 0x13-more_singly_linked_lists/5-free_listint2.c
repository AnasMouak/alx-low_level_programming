#include "lists.h"

/**
 * free_listint2 - free list and sets head to NULL
 * @head: pointer to the first node of the list
 * Return: nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *p, *n;

	n = *head;
	while (n != 0)
	{
		p = n->next;
		free(n);
		n = p;
	}
	*head = 0;
}
