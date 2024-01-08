#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index
 * of a linked list.
 * @head: head of a list.
 * @index: index of the list where the node is
 * deleted.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */


int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	struct dlistint_s *ptr = *head;
	struct dlistint_s *ptr2 = *head;

	if (*head == 0)
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = (*head)->next;
		free(ptr2);
		return (1);
	}

	while (ptr != 0 && i < index)
	{
		ptr = ptr2;
		ptr2 = ptr2->next;
		i++;
	}
	if (ptr2 == 0)
	{
		return (-1);
	}
	ptr = ptr2->prev;
	ptr->next = ptr2->next;
	ptr2->next->prev = ptr;
	free(ptr2);
	ptr2 = 0;

	return (1);
}
