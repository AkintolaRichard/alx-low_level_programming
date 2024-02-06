#include "lists.h"

/**
 * pop_listint - deletes the head of a listint_t linked list
 * and returns the head's node data
 * @head: pointer to the pointer of a listint_t list
 *
 * Return: head's node data or 0.
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data = 0;

	if (*head != NULL)
	{
		temp = (*head)->next;
		data = (*head)->n;
		free(*head);
		*head = temp;
		return (data);
	}
	return (data);
}
