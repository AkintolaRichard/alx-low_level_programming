#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @head: pointer to the pointer to the dlistint_t list
 * @idx: the index of the list where the new node should be inserted
 * @n: the data of the new node
 * Return: the address of the new node or NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **head, unsigned int idx, int n)
{
	dlistint_t *new = NULL, *temp = *head;
	unsigned int index = 0;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;

	if (temp == NULL && idx != 0)
		return (NULL);

	if (idx == 0)
	{
		new->next = temp;
		new->prev = NULL;
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
	new->prev = temp;

	return (new);
}
