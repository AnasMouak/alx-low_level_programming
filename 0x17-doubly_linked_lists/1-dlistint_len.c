#include "lists.h"

/**
 * dlistint_len - a function that returns the number of elements.
 * @h: pointer to the first node
 * Return: number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;

	while (h != 0)
	{
		h = h->next;
		i++;
	}
	return (i);
}
