#include "lists.h"

/**
 * sum_dlistint - calculates the sum of all the data in a dlistint_t list
 * @head: first node in the linked list
 *
 * Return: the resulting sum
 */

int sum_dlistint(dlistint_t *head)
{
	unsigned int sum;

	sum = 0;
	while (head != 0)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
