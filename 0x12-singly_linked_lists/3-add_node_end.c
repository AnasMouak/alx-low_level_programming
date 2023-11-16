#include "lists.h"

/**
 * add_node_end - Adds a new node at the end
 * of a list_t list.
 * @head: A pointer the head of the list_t list.
 * @str: The string to be added to the list_t list.
 *
 * Return: If the function fails - NULL.
 * Otherwise - the address of the new element.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	int len;
	list_t *l, *ll;

	l = (list_t *)malloc(sizeof(list_t));
	if (l == 0)
	{
		return (0);
	}

	l->str = strdup(str);
	if (l->str == 0)
	{
		free(l);
		return (0);
	}
	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	l->str = l->str;
	l->len = len;
	l->next = 0;

	if (*head != 0)
	{
		ll = *head;
		while (ll->next != 0)
		{
			ll = ll->next;
		}
		ll->next = l;
	}
	else
	{
		*head = l;
	}
	return (*head);
}
