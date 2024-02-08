#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at given index
 * of a listint_t list
 * @head: pointer to the pointer to the listint_t list
 * @index: the index of node to be deleted from the list
 * Return: 1 or -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current = NULL, *temp = NULL;
	unsigned int idx = 0;

	current = *head;
	while (current != NULL)
	{
		if (index == idx + 1)
		{
			temp = current->next;
			current->next = temp->next;
			free(temp);
			return (1);
		}
		else if (index == 0)
		{
			*head = current->next;
			free(current);
			return (1);
		}
		current = current->next;
		idx++;
	}
	return (-1);
}
