#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * @head: pointer to the first element in the linked list
 *
 * Return: the data inside the elements that was deleted,
 * or 0 if the list is empty
 */

int pop_listint(listint_t **head)
{
	int val;
	listint_t *p;

	if (*head == 0)
	{
		return (0);
	}

	p = *head;
	val = p->n;
	*head = p->next;
	free(p);
	p = 0;

	return (val);
}
