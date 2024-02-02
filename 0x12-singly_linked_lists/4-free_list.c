#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: pointer to a list_t list
 *
 * Return: nothing
 */
void free_list(list_t *head)
{
	list_t *current, *temp = head;

	while (temp != NULL)
	{
		current = temp->next;
		if (current != NULL)
			free(temp);
		temp = current;
	}
}
