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

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;

	if (idx == 0)
	{
		if (head == NULL)
		{
			*head = malloc(sizeof(listint_t));
			if (*head == NULL)
				return (NULL);
			temp = *head;
		}
		new->next = temp;
		*head = temp;
		return (new);
	}

	for (index = 0; index < (idx - 1); index++)
	{
		if (temp == NULL)
			return (NULL);
		temp = temp->next;
	}

	new->next = temp->next;
	temp->next = new;

	return (new);
}
