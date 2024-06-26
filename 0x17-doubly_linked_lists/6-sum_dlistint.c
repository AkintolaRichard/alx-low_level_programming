#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data(n) of a dlistint_t
 * linked list
 * @head: pointer to a dlistint_t
 * Return: int
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;
	int sum = 0;

	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
