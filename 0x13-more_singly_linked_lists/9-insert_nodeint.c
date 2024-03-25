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
	listint_t *new = NULL, *temp = *head;
	unsigned int index = 0;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;

	if (temp == NULL && idx != 0)
		return (NULL);

	if (idx == 0)
	{
		new->next = temp;
		*head = temp;
		return (new);
	}

	while (index != idx - 1)
	{
		temp = temp->next;
		if (temp == NULL)
		{
			free(new);
			return (NULL);
		}
		index++;
	}

	new->next = temp->next;
	temp->next = new;

	return (new);
}
