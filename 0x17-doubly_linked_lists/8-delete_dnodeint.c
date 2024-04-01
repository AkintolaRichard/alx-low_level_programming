#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at given index
 * of a dlistint_t list
 * @head: pointer to the pointer to the dlistint_t list
 * @index: the index of node to be deleted from the list
 * Return: 1 or -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = NULL, *temp = NULL;
	unsigned int idx = 0;

	current = *head;
	while (current != NULL)
	{
		if (index == 0)
		{
			temp = current;
			if (current->next != NULL)
				current->next->prev = current->prev;
			*head = current->next;
			free(temp);
			return (1);
		}
		else if (index == idx)
		{
			temp = current;
			current->prev->next = current->next;
			current->next->prev = current->prev;
			free(temp);
			return (1);
		}
		current = current->next;
		idx++;
	}
	return (-1);
}
