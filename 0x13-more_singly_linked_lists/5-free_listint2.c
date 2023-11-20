#include "lists.h"

/**
 * free_listint2 - free list and sets head to NULL
 * @head: pointer to the first node of the list
 * Return: nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *p;

	if (head == 0)
	{
		return;
	}

	while (*head != 0)
	{
		p = (*head)->next;
		free(*head);
		*head = p;
	}
	head = 0;
}
