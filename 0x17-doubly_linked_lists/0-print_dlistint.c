#include "lists.h"

/**
 * print_dlistint - a function that prints all elements of a list
 * @h: pointer to first node
 * Return: the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;

	while (h != 0)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
