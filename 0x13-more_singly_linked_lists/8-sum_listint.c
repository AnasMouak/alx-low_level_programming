#include "lists.h"

/**
 * sum_listint - calculates the sum of all the data in a listint_t list
 * @head: first node in the linked list
 *
 * Return: the resulting sum
 */

int sum_listint(listint_t *head)
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

