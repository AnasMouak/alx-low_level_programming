#include "lists.h"

/**
 * add_dnodeint_end - a function that adds a new node
 *            at the end of the node
 *
 * @head: pointer to the first node of the list
 * @n: element int to add to new node
 * Return: address of the new element or NULL if it fails
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	struct dlistint_s *ptr;
	struct dlistint_s *new_node = malloc(sizeof(struct dlistint_s));

	if (new_node == 0)
	{
		return (0);
	}
	new_node->prev = 0;
	new_node->n = n;
	new_node->next = 0;

	if (*head == 0)
	{
		*head = new_node;
		return (new_node);
	}

	ptr = *head;
	while (ptr->next != 0)
	{
		ptr = ptr->next;
	}
	ptr->next = new_node;

	if (ptr->next != 0)
	{
		new_node->prev = ptr;
	}
	return (new_node);
}

