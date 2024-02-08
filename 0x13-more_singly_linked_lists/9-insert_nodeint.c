#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to the pointer to the listint_t list
 * @idx: the index of the list where the new node should be inserted
 * @n: the data of the new node
 * Return: the address of the new node or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current = NULL, *temp = NULL;
	unsigned int index = 0;

	current = *head;
	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
		return (NULL);
	while (current != NULL)
	{
		if (idx == index + 1)
		{
			temp->n = n;
			temp->next = current->next;
			current->next = temp;
			return (temp);
		}
		else if (idx == index)
		{
			temp->n = n;
			temp->next = current;
			current = temp;
			return (temp);
		}
		current = current->next;
		index++;
	}
	free(temp);
	return (NULL);
}
