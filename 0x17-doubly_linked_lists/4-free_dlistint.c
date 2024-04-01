#include "lists.h"

/**
 * free_dlistint - frees a listint_t list
 * @head: pointer to a dlistint_t list
 *
 * Return: nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = NULL;

	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current);
	}
}
