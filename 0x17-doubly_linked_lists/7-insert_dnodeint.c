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
	dlistint_t *new = NULL, *temp = NULL, *prev = NULL;
	unsigned int index = 0;

	if (idx < 0)
		return (NULL);
	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = NULL;
	temp = *head;
	while (index < idx)
	{
		prev = temp;
		temp = temp->next;
		index++;
		if (temp == NULL && index == idx)
		{
			prev->next = new;
			new->prev = prev;
			new->next = temp;
			return (new);
		}
		else if (temp == NULL)
		{
			free(new);
			return (NULL);
		}
	}

	if (temp->prev != NULL)
		temp->prev->next = new;
	new->next = temp;
	new->prev = temp->prev;
	temp->prev = new;

	return (new);
}
