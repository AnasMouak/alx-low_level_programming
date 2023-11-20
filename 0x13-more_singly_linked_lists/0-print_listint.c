#include "lists.h"

/**
 * print_listint - a function that prints all elements of a list
 * @h: pointer to first node
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
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
