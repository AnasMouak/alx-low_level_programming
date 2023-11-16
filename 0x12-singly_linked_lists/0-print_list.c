#include "lists.h"

/**
 * print_list - prints list.
 * @h: param list
 * Return: struct
 */

size_t print_list(const list_t *h)
{
	const list_t *pt = h;
	size_t i = 0;

	while (pt != 0)
	{
		if (pt->str == 0)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", pt->len, pt->str);
		}
	pt = pt->next;
	i++;
	}
	return (i);
}

