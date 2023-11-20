#include "lists.h"

/**
 * print_listint_safe - prints a linked list.
 * @head: head of a list.
 *
 * Return: number of nodes in the list.
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *p, *pa;
	size_t i = 0;

	p = head;
	pa = head;

	while (p != 0 && pa != 0 && pa->next != 0)
	{
		printf("[%p] %d\n", (void *)p, p->n);
		p = p->next;
		pa = pa->next->next;

		if (p == pa)
		{
			printf("-> [%p] %d\n", (void *)p, p->n);
			exit(98);
		}
		i++;
	}
	return (i);
}

