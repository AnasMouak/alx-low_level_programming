#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node
 * at a given position.
 * @h: head of a list.
 * @idx: index of the list where the new node is
 * added.
 * @n: integer element.
 *
 * Return: the address of the new node, or NULL if it
 * failed.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	struct dlistint_s *ptr = *h;
	struct dlistint_s *ptr2;
	struct dlistint_s *new_node;

	if (h == 0 || idx > dlistint_len(*h))
	{
		return (0);
	}

	new_node = malloc(sizeof(struct dlistint_s));
	if (new_node == 0)
	{
		return (0);
	}
	new_node->prev = 0;
	new_node->n = n;
	new_node->next = 0;

	if (idx == 0)
	{
		new_node->next = *h;
		if (*h != 0)
		{
			(*h)->prev = new_node;
		}
		*h = new_node;
		return (new_node);
	}
	while (ptr != 0 && i < idx - 1)
	{
		ptr = ptr->next;
		i++;
	}
	if (ptr == 0)
	{
		ptr = *h;
		while (ptr->next != NULL)
			ptr = ptr->next;

		ptr->next = new_node;
		new_node->prev = ptr;
		return new_node;
	}

	ptr2 = ptr->next;
	ptr->next = new_node;
	ptr2->prev = new_node;
	new_node->prev = ptr;
	new_node->next = ptr2;

	return (*h);
}
/**
 * dlistint_len - Returns the number of elements in a doubly linked list.
 * @h: Pointer to the head of the list.
 * Return: Number of elements in the list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t len = 0;
	while (h != NULL)
	{
		len++;
		h = h->next;
	}
	return (len);
}
