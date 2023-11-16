#include "lists.h"

/**
 * list_len - returns the number of elements in a linked lists
 * @h: linked list of type listint_t to traverse
 *
 * Return: number of elements in a linked list_t list.
 */

size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h != 0)
	{
		h = h->next;
		i++;
	}
	return (i);
}
