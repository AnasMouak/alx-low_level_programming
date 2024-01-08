#include "lists.h"

/**
 * add_dnodeint - a function that adds a new node at the
 *              beginning of a list
 *
 * @head: pointer to the first node
 * @n: integer n to add in a new node
 * Return: address of the new element or NULL if it fails
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	struct dlistint_s *new_node = malloc(sizeof(struct dlistint_s));

	if (new_node == 0)
	{
		return (0);
	}

	new_node->prev = 0;
	new_node->n = n;
	new_node->next = 0;
	new_node->next = *head;

	if (*head != 0)
	{
		(*head)->prev = new_node;
	}

	*head = new_node;
	return (*head);
}
