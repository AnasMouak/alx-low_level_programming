#include "lists.h"

/**
 * listint_len - a function that returns the number of elements.
 * @h: pointer to the first node
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h != 0)
	{
		h = h->next;
		i++;
	}
	return (i);
}
