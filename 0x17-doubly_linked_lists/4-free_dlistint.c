#include "lists.h"

/**
 * free_dlistint - free list
 * @head: pointer to the first node of the list
 * Return: nothing
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *ptr;

	while (head != 0)
	{
		ptr = head->next;
		free(head);
		head = ptr;
	}
}
