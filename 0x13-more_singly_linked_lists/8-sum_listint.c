#include "lists.h"

/**
 * sum_listint - returns the sum of all the data(n) of a listint_t linked list
 * @head: pointer to a listint_t
 * Return: int
 */
int sum_listint(listint_t *head)
{
	listint_t *temp = head;
	int sum = 0;

	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
