#include "lists.h"

/**
 * reverse_listint - reverses a linked list.
 * @head: head of a list.
 * Return: pointer to the first node.
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *t1, *t2;

	t1 = 0;

	while (*head != 0)
	{
		t2 = (*head)->next;
		(*head)->next = t1;
		t1 = *head;
		*head = t2;
	}
	*head = t1;

	return (*head);
}
